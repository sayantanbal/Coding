#include <iostream>
using namespace std;

class ticketCounter {
private:
    unsigned int totalPassengers;
    double totalMoney;
    const double TICKET_PRICE = 50.0;  // Price in Rs.

public:
    // Constructor to initialize data members
    ticketCounter() {
        totalPassengers = 0;
        totalMoney = 0.0;
    }
    
    // Process a passenger based on their age
    void addPassenger(int age) {
        // Increment passenger count regardless of age
        totalPassengers++;
        
        // Only charge passengers 5 years and older
        if (age >= 5) {
            totalMoney += TICKET_PRICE;
        }
        
        cout << "Passenger added! ";
        if (age < 5) {
            cout << "Child under 5 - no charge." << endl;
        } else {
            cout << "Ticket price: Rs. " << TICKET_PRICE << endl;
        }
    }
    
    // Display the current statistics
    void displayStats() {
        cout << "\n--- Ticket Counter Statistics ---" << endl;
        cout << "Total passengers: " << totalPassengers << endl;
        cout << "Total money collected: Rs. " << totalMoney << endl;
        cout << "-------------------------------" << endl;
    }
};

int main() {
    ticketCounter counter;
    int age;
    char choice;
    
    cout << "Toy-Train Ticket Counter\n" << endl;
    
    do {
        cout << "Enter passenger age: ";
        cin >> age;
        
        counter.addPassenger(age);
        
        cout << "Add another passenger? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    counter.displayStats();
    
    return 0;
}