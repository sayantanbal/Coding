#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

// Custom Exception Classes
class BookingException : public exception {
    string message;
public:
    BookingException(const string& msg) : message("Booking Error: " + msg) {}
    const char* what() const noexcept override { return message.c_str(); }
};

class InvalidInputException : public exception {
    string message;
public:
    InvalidInputException(const string& msg) : message("Invalid Input: " + msg) {}
    const char* what() const noexcept override { return message.c_str(); }
};

// Room class
class Room {
private:
    int roomNumber;
    string roomType;
    double pricePerNight;
    bool isAvailable;

public:
    Room(int num, string type, double price) 
        : roomNumber(num), roomType(type), pricePerNight(price), isAvailable(true) {
        if (num <= 0) throw InvalidInputException("Room number must be positive");
        if (price <= 0) throw InvalidInputException("Price must be positive");
    }

    int getRoomNumber() const { return roomNumber; }
    string getRoomType() const { return roomType; }
    double getPricePerNight() const { return pricePerNight; }
    bool getAvailability() const { return isAvailable; }
    
    void setAvailability(bool status) { isAvailable = status; }

    void displayRoom() const {
        cout << "Room " << roomNumber << " (" << roomType << ") - Rs." 
             << pricePerNight << "/night - " 
             << (isAvailable ? "Available" : "Booked") << endl;
    }
};

// Customer class
class Customer {
private:
    string name, email, phone;
    static int totalCustomers;

public:
    Customer(string n, string e, string p) : name(n), email(e), phone(p) {
        if (n.empty() || e.empty() || p.empty()) {
            throw InvalidInputException("Customer details cannot be empty");
        }
        totalCustomers++;
    }

    ~Customer() { totalCustomers--; }

    string getName() const { return name; }
    string getEmail() const { return email; }
    string getPhone() const { return phone; }
    static int getTotalCustomers() { return totalCustomers; }

    void displayCustomer() const {
        cout << "Customer: " << name << ", Email: " << email 
             << ", Phone: " << phone << endl;
    }
};

int Customer::totalCustomers = 0;

// Booking class
class Booking {
private:
    static int totalBookings;
    static int nextBookingId;
    int bookingId;
    Customer* customer;
    Room* room;
    int nights;
    double totalAmount;

public:
    Booking(Customer* cust, Room* rm, int n) 
        : customer(cust), room(rm), nights(n) {
        if (!cust) throw BookingException("Invalid customer");
        if (!rm) throw BookingException("Invalid room");
        if (n <= 0) throw InvalidInputException("Nights must be positive");
        if (!rm->getAvailability()) throw BookingException("Room not available");

        bookingId = nextBookingId++;
        totalAmount = rm->getPricePerNight() * nights;
        rm->setAvailability(false);
        totalBookings++;
    }

    ~Booking() { 
        if (room) room->setAvailability(true);
        totalBookings--; 
    }

    int getBookingId() const { return bookingId; }
    double getTotalAmount() const { return totalAmount; }
    static int getTotalBookings() { return totalBookings; }

    void displayBooking() const {
        cout << "\n=== BOOKING DETAILS ===\n";
        cout << "Booking ID: " << bookingId << endl;
        customer->displayCustomer();
        room->displayRoom();
        cout << "Nights: " << nights << ", Total Amount: Rs." << totalAmount << endl;
        cout << "========================\n";
    }

    void cancelBooking() {
        if (room) {
            room->setAvailability(true);
            cout << "Booking " << bookingId << " cancelled successfully!" << endl;
        }
    }
};

int Booking::totalBookings = 0;
int Booking::nextBookingId = 1001;

// Hotel class
class Hotel {
private:
    vector<Room*> rooms;
    vector<Customer*> customers;
    vector<Booking*> bookings;
    string hotelName;

public:
    Hotel(string name) : hotelName(name) {
        cout << "Hotel " << hotelName << " initialized!" << endl;
    }

    ~Hotel() {
        for (auto* room : rooms) delete room;
        for (auto* customer : customers) delete customer;
        for (auto* booking : bookings) delete booking;
        cout << "Hotel " << hotelName << " cleaned up!" << endl;
    }

    void addRoom(int roomNum, string type, double price) {
        try {
            rooms.push_back(new Room(roomNum, type, price));
            cout << "Room " << roomNum << " added successfully!" << endl;
        } catch (const exception& e) {
            cout << "Failed to add room: " << e.what() << endl;
        }
    }

    Customer* addCustomer(string name, string email, string phone) {
        try {
            Customer* customer = new Customer(name, email, phone);
            customers.push_back(customer);
            cout << "Customer " << name << " registered!" << endl;
            return customer;
        } catch (const exception& e) {
            cout << "Failed to register customer: " << e.what() << endl;
            return nullptr;
        }
    }

    Room* findAvailableRoom(string roomType) {
        for (auto* room : rooms) {
            if (room->getRoomType() == roomType && room->getAvailability()) {
                return room;
            }
        }
        return nullptr;
    }

    bool makeBooking(Customer* customer, string roomType, int nights) {
        try {
            Room* room = findAvailableRoom(roomType);
            if (!room) throw BookingException("No " + roomType + " rooms available");

            Booking* booking = new Booking(customer, room, nights);
            bookings.push_back(booking);
            booking->displayBooking();
            return true;
        } catch (const exception& e) {
            cout << "Booking failed: " << e.what() << endl;
            return false;
        }
    }

    void displayAvailableRooms() const {
        cout << "\n=== AVAILABLE ROOMS ===\n";
        bool hasAvailable = false;
        for (const auto* room : rooms) {
            if (room->getAvailability()) {
                room->displayRoom();
                hasAvailable = true;
            }
        }
        if (!hasAvailable) cout << "No rooms available!" << endl;
        cout << endl;
    }

    void displayAllBookings() const {
        cout << "\n=== ALL BOOKINGS ===\n";
        if (bookings.empty()) {
            cout << "No bookings found!" << endl;
            return;
        }
        for (const auto* booking : bookings) {
            booking->displayBooking();
        }
    }

    void displayStatistics() const {
        cout << "\n=== HOTEL STATISTICS ===\n";
        cout << "Hotel: " << hotelName << endl;
        cout << "Total Rooms: " << rooms.size() << endl;
        cout << "Total Customers: " << Customer::getTotalCustomers() << endl;
        cout << "Total Bookings: " << Booking::getTotalBookings() << endl;
        
        double totalRevenue = 0;
        for (const auto* booking : bookings) {
            totalRevenue += booking->getTotalAmount();
        }
        cout << "Total Revenue: Rs." << totalRevenue << endl;
        cout << "========================\n";
    }
};

int main() {
    try {
        Hotel hotel("Grand Plaza");

        // Add rooms using dynamic allocation
        hotel.addRoom(101, "Standard", 2000);
        hotel.addRoom(201, "Deluxe", 3500);
        hotel.addRoom(301, "Suite", 5000);
        hotel.addRoom(102, "Standard", 2000);
        hotel.addRoom(202, "Deluxe", 3500);

        // Add customers
        Customer* customer1 = hotel.addCustomer("Alice Johnson", "alice@email.com", "9876543210");
        Customer* customer2 = hotel.addCustomer("Bob Smith", "bob@email.com", "9876543211");
        Customer* customer3 = hotel.addCustomer("Carol Davis", "carol@email.com", "9876543212");

        // Display available rooms
        hotel.displayAvailableRooms();

        // Make bookings
        cout << "\n=== MAKING BOOKINGS ===\n";
        hotel.makeBooking(customer1, "Standard", 3);
        hotel.makeBooking(customer2, "Deluxe", 2);
        hotel.makeBooking(customer3, "Suite", 1);

        // Try booking unavailable room type
        hotel.makeBooking(customer1, "Presidential", 1);

        // Display updated room availability
        hotel.displayAvailableRooms();

        // Display all bookings
        hotel.displayAllBookings();

        // Display statistics
        hotel.displayStatistics();

        // Test exception handling
        cout << "\n=== TESTING EXCEPTIONS ===\n";
        try {
            hotel.addRoom(-1, "Invalid", 1000); // Invalid room number
        } catch (const exception& e) {
            cout << "Caught exception: " << e.what() << endl;
        }

        try {
            hotel.addCustomer("", "", ""); // Empty customer details
        } catch (const exception& e) {
            cout << "Caught exception: " << e.what() << endl;
        }

    } catch (const exception& e) {
        cout << "Fatal error: " << e.what() << endl;
    }

    return 0;
}