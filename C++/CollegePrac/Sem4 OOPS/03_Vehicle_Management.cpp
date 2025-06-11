#include <iostream>
#include <cstring>
using namespace std;

class Vehicle {
protected:
    char* model;
    static int totalVehicles;
public:
    Vehicle(const char* m) : model(new char[strlen(m) + 1]) {
        strcpy(model, m);
        totalVehicles++;
    }
    
    virtual ~Vehicle() { delete[] model; totalVehicles--; }
    
    virtual void display() const = 0;
    virtual void start() const { cout << model << " starting...\n"; }
    
    static int getCount() { return totalVehicles; }
};

int Vehicle::totalVehicles = 0;

class Car : public Vehicle {
    int doors;
public:
    Car(const char* m, int d) : Vehicle(m), doors(d) {}
    
    void display() const override {
        cout << "Car: " << model << ", Doors: " << doors << endl;
    }
    
    void start() const override {
        cout << "Car " << model << " ignition started!\n";
    }
};

class Bike : public Vehicle {
    bool hasCarrier;
public:
    Bike(const char* m, bool carrier) : Vehicle(m), hasCarrier(carrier) {}
    
    void display() const override {
        cout << "Bike: " << model << ", Carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }
    
    void start() const override {
        cout << "Bike " << model << " kick started!\n";
    }
};

class Truck : public Vehicle {
    float capacity;
public:
    Truck(const char* m, float cap) : Vehicle(m), capacity(cap) {}
    
    void display() const override {
        cout << "Truck: " << model << ", Capacity: " << capacity << " tons\n";
    }
};

int main() {
    Vehicle* vehicles[] = {
        new Car("Honda City", 4),
        new Bike("Yamaha R15", true),
        new Truck("Tata 407", 2.5f)
    };
    
    cout << "Total vehicles: " << Vehicle::getCount() << "\n\n";
    
    for (int i = 0; i < 3; i++) {
        vehicles[i]->display();
        vehicles[i]->start();
        cout << endl;
    }
    
    for (int i = 0; i < 3; i++) delete vehicles[i];
    
    cout << "Vehicles after cleanup: " << Vehicle::getCount() << endl;
    
    return 0;
}