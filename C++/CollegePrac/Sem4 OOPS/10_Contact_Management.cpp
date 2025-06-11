#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
#include <algorithm>
using namespace std;

// Custom Exception Classes
class ContactException : public exception {
    string message;
public:
    ContactException(const string& msg) : message("Contact Error: " + msg) {}
    const char* what() const noexcept override { return message.c_str(); }
};

class FileException : public exception {
    string message;
public:
    FileException(const string& msg) : message("File Error: " + msg) {}
    const char* what() const noexcept override { return message.c_str(); }
};

// Contact class
class Contact {
private:
    string name, phone, email;

public:
    Contact(string n = "", string p = "", string e = "") : name(n), phone(p), email(e) {
        if (n.empty() || p.empty() || e.empty()) {
            throw ContactException("Name, phone, and email cannot be empty");
        }
        if (p.length() < 10) {
            throw ContactException("Phone number must be at least 10 digits");
        }
        if (e.find('@') == string::npos) {
            throw ContactException("Invalid email format");
        }
    }

    // Getters
    string getName() const { return name; }
    string getPhone() const { return phone; }
    string getEmail() const { return email; }

    // Display contact
    void displayContact() const {
        cout << "Name: " << name << ", Phone: " << phone << ", Email: " << email << endl;
    }

    // Convert to file format (pipe-delimited)
    string toFileFormat() const {
        return name + "|" + phone + "|" + email;
    }

    // Create contact from file format
    static Contact fromFileFormat(const string& line) {
        size_t pos1 = line.find('|');
        size_t pos2 = line.find('|', pos1 + 1);
        
        if (pos1 == string::npos || pos2 == string::npos) {
            throw FileException("Invalid file format");
        }
        
        string name = line.substr(0, pos1);
        string phone = line.substr(pos1 + 1, pos2 - pos1 - 1);
        string email = line.substr(pos2 + 1);
        
        return Contact(name, phone, email);
    }

    // Comparison operators for searching
    bool operator==(const Contact& other) const {
        return name == other.name || phone == other.phone || email == other.email;
    }
};

// Contact Manager class
class ContactManager {
private:
    vector<Contact> contacts;
    string filename;

public:
    ContactManager(string file = "contacts.txt") : filename(file) {
        loadContacts();
    }

    ~ContactManager() {
        saveContacts();
    }

    // Add contact
    void addContact(const Contact& contact) {
        // Check for duplicates
        for (const auto& c : contacts) {
            if (c.getName() == contact.getName() || 
                c.getPhone() == contact.getPhone() || 
                c.getEmail() == contact.getEmail()) {
                throw ContactException("Contact already exists with same name, phone, or email");
            }
        }
        
        contacts.push_back(contact);
        cout << "Contact added successfully!" << endl;
    }

    // Delete contact by name
    bool deleteContact(const string& name) {
        auto it = find_if(contacts.begin(), contacts.end(),
                         [&name](const Contact& c) { return c.getName() == name; });
        
        if (it != contacts.end()) {
            contacts.erase(it);
            cout << "Contact deleted successfully!" << endl;
            return true;
        }
        
        cout << "Contact not found!" << endl;
        return false;
    }

    // Search contacts
    vector<Contact> searchContacts(const string& query) const {
        vector<Contact> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);
        
        for (const auto& contact : contacts) {
            string lowerName = contact.getName();
            string lowerPhone = contact.getPhone();
            string lowerEmail = contact.getEmail();
            
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            transform(lowerEmail.begin(), lowerEmail.end(), lowerEmail.begin(), ::tolower);
            
            if (lowerName.find(lowerQuery) != string::npos || 
                lowerPhone.find(query) != string::npos || 
                lowerEmail.find(lowerQuery) != string::npos) {
                results.push_back(contact);
            }
        }
        
        return results;
    }

    // Display all contacts
    void displayAllContacts() const {
        if (contacts.empty()) {
            cout << "No contacts found!" << endl;
            return;
        }
        
        cout << "\n=== ALL CONTACTS (" << contacts.size() << " total) ===\n";
        for (size_t i = 0; i < contacts.size(); i++) {
            cout << i + 1 << ". ";
            contacts[i].displayContact();
        }
        cout << "==================================\n";
    }

    // Save contacts to file
    void saveContacts() const {
        ofstream file(filename);
        if (!file.is_open()) {
            throw FileException("Cannot open file for writing: " + filename);
        }
        
        for (const auto& contact : contacts) {
            file << contact.toFileFormat() << endl;
        }
        
        file.close();
        cout << "Contacts saved to " << filename << endl;
    }

    // Load contacts from file
    void loadContacts() {
        ifstream file(filename);
        if (!file.is_open()) {
            cout << "No existing contact file found. Starting with empty contact list." << endl;
            return;
        }
        
        string line;
        int loadedCount = 0;
        
        while (getline(file, line)) {
            if (!line.empty()) {
                try {
                    contacts.push_back(Contact::fromFileFormat(line));
                    loadedCount++;
                } catch (const exception& e) {
                    cout << "Error loading contact: " << e.what() << endl;
                }
            }
        }
        
        file.close();
        cout << "Loaded " << loadedCount << " contacts from " << filename << endl;
    }

    // Get contact count
    int getContactCount() const { return contacts.size(); }

    // Sort contacts by name
    void sortContacts() {
        sort(contacts.begin(), contacts.end(),
             [](const Contact& a, const Contact& b) {
                 return a.getName() < b.getName();
             });
        cout << "Contacts sorted alphabetically!" << endl;
    }
};

// Menu-driven interface
class ContactApp {
private:
    ContactManager manager;

public:
    ContactApp() : manager("contacts.txt") {}

    void run() {
        int choice;
        
        do {
            displayMenu();
            cout << "Enter your choice: ";
            
            try {
                cin >> choice;
                cin.ignore(); // Clear input buffer
                
                switch (choice) {
                    case 1: addContactMenu(); break;
                    case 2: deleteContactMenu(); break;
                    case 3: searchContactMenu(); break;
                    case 4: manager.displayAllContacts(); break;
                    case 5: manager.sortContacts(); break;
                    case 6: manager.saveContacts(); break;
                    case 7: cout << "Goodbye!" << endl; break;
                    default: cout << "Invalid choice! Please try again." << endl;
                }
            } catch (const exception& e) {
                cout << "Error: " << e.what() << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
            
            if (choice != 7) {
                cout << "\nPress Enter to continue...";
                cin.get();
            }
            
        } while (choice != 7);
    }

private:
    void displayMenu() const {
        cout << "\n========== CONTACT MANAGER ==========\n";
        cout << "1. Add Contact\n";
        cout << "2. Delete Contact\n";
        cout << "3. Search Contacts\n";
        cout << "4. Display All Contacts\n";
        cout << "5. Sort Contacts\n";
        cout << "6. Save Contacts\n";
        cout << "7. Exit\n";
        cout << "=====================================\n";
        cout << "Total Contacts: " << manager.getContactCount() << endl;
    }

    void addContactMenu() {
        try {
            string name, phone, email;
            
            cout << "Enter contact details:\n";
            cout << "Name: ";
            getline(cin, name);
            cout << "Phone: ";
            getline(cin, phone);
            cout << "Email: ";
            getline(cin, email);
            
            Contact contact(name, phone, email);
            manager.addContact(contact);
            
        } catch (const exception& e) {
            cout << "Failed to add contact: " << e.what() << endl;
        }
    }

    void deleteContactMenu() {
        string name;
        cout << "Enter name of contact to delete: ";
        getline(cin, name);
        
        if (!name.empty()) {
            manager.deleteContact(name);
        } else {
            cout << "Name cannot be empty!" << endl;
        }
    }

    void searchContactMenu() {
        string query;
        cout << "Enter search term (name, phone, or email): ";
        getline(cin, query);
        
        if (query.empty()) {
            cout << "Search term cannot be empty!" << endl;
            return;
        }
        
        vector<Contact> results = manager.searchContacts(query);
        
        if (results.empty()) {
            cout << "No contacts found matching '" << query << "'" << endl;
        } else {
            cout << "\n=== SEARCH RESULTS (" << results.size() << " found) ===\n";
            for (size_t i = 0; i < results.size(); i++) {
                cout << i + 1 << ". ";
                results[i].displayContact();
            }
            cout << "=======================================\n";
        }
    }
};

int main() {
    try {
        ContactApp app;
        app.run();
    } catch (const exception& e) {
        cout << "Fatal error: " << e.what() << endl;
        return 1;
    }
    
    return 0;
}