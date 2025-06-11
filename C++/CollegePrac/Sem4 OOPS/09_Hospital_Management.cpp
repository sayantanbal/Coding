#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Forward declaration
class Hospital;

// Patient class
class Patient {
private:
    string patientId, name, disease;
    int age;
    double billAmount;
    bool isAdmitted;
    string assignedDoctor;

public:
    Patient(string id = "", string n = "", int a = 0, string d = "") 
        : patientId(id), name(n), age(a), disease(d), billAmount(0.0), 
          isAdmitted(false), assignedDoctor("None") {}

    // Public getter functions for basic access
    string getName() const { return name; }
    string getPatientId() const { return patientId; }
    bool getAdmissionStatus() const { return isAdmitted; }

    // Friend class declaration - Hospital can access private members
    friend class Hospital;

    void displayBasicInfo() const {
        cout << "Patient ID: " << patientId << ", Name: " << name 
             << ", Age: " << age << ", Status: " 
             << (isAdmitted ? "Admitted" : "Discharged") << endl;
    }
};

// Doctor class
class Doctor {
private:
    string doctorId, name, specialization;
    int experience;
    double consultationFee;
    vector<string> assignedPatients;
    bool isAvailable;

public:
    Doctor(string id = "", string n = "", string spec = "", int exp = 0, double fee = 0.0) 
        : doctorId(id), name(n), specialization(spec), experience(exp), 
          consultationFee(fee), isAvailable(true) {}

    // Public getter functions
    string getName() const { return name; }
    string getDoctorId() const { return doctorId; }
    string getSpecialization() const { return specialization; }
    bool getAvailability() const { return isAvailable; }

    // Friend class declaration - Hospital can access private members
    friend class Hospital;

    void displayBasicInfo() const {
        cout << "Doctor ID: " << doctorId << ", Name: " << name 
             << ", Specialization: " << specialization 
             << ", Experience: " << experience << " years, Status: "
             << (isAvailable ? "Available" : "Busy") << endl;
    }
};

// Hospital class - Friend to both Patient and Doctor
class Hospital {
private:
    string hospitalName;
    vector<Patient> patients;
    vector<Doctor> doctors;
    static int totalAdmissions;

public:
    Hospital(string name) : hospitalName(name) {
        cout << "Hospital " << hospitalName << " initialized!" << endl;
    }

    // Add patient
    void addPatient(const Patient& patient) {
        patients.push_back(patient);
        cout << "Patient " << patient.name << " registered!" << endl;
    }

    // Add doctor
    void addDoctor(const Doctor& doctor) {
        doctors.push_back(doctor);
        cout << "Doctor " << doctor.name << " (" << doctor.specialization 
             << ") added to staff!" << endl;
    }

    // Admit patient - accessing private members as friend
    bool admitPatient(const string& patientId, const string& doctorId) {
        Patient* patient = findPatient(patientId);
        Doctor* doctor = findDoctor(doctorId);

        if (!patient) {
            cout << "Patient not found!" << endl;
            return false;
        }
        if (!doctor) {
            cout << "Doctor not found!" << endl;
            return false;
        }
        if (patient->isAdmitted) {
            cout << "Patient already admitted!" << endl;
            return false;
        }
        if (!doctor->isAvailable) {
            cout << "Doctor not available!" << endl;
            return false;
        }

        // Access private members directly (friend privilege)
        patient->isAdmitted = true;
        patient->assignedDoctor = doctor->name;
        patient->billAmount += doctor->consultationFee;
        doctor->assignedPatients.push_back(patient->name);
        doctor->isAvailable = false;
        totalAdmissions++;

        cout << "Patient " << patient->name << " admitted under Dr. " 
             << doctor->name << endl;
        return true;
    }

    // Discharge patient - accessing private members as friend
    bool dischargePatient(const string& patientId, double additionalCharges = 0.0) {
        Patient* patient = findPatient(patientId);
        if (!patient || !patient->isAdmitted) {
            cout << "Patient not found or not admitted!" << endl;
            return false;
        }

        // Find and free the assigned doctor
        for (auto& doctor : doctors) {
            for (auto it = doctor.assignedPatients.begin(); 
                 it != doctor.assignedPatients.end(); ++it) {
                if (*it == patient->name) {
                    doctor.assignedPatients.erase(it);
                    doctor.isAvailable = true;
                    break;
                }
            }
        }

        // Access private members directly (friend privilege)
        patient->isAdmitted = false;
        patient->billAmount += additionalCharges;
        
        cout << "Patient " << patient->name << " discharged. Total bill: Rs." 
             << patient->billAmount << endl;
        patient->assignedDoctor = "None";
        return true;
    }

    // Generate detailed patient report - accessing private members
    void generatePatientReport(const string& patientId) const {
        const Patient* patient = findPatient(patientId);
        if (!patient) {
            cout << "Patient not found!" << endl;
            return;
        }

        cout << "\n=== DETAILED PATIENT REPORT ===\n";
        cout << "Patient ID: " << patient->patientId << endl;
        cout << "Name: " << patient->name << endl;
        cout << "Age: " << patient->age << " years" << endl;
        cout << "Disease: " << patient->disease << endl;
        cout << "Admission Status: " << (patient->isAdmitted ? "Admitted" : "Discharged") << endl;
        cout << "Assigned Doctor: " << patient->assignedDoctor << endl;
        cout << "Total Bill: Rs." << patient->billAmount << endl;
        cout << "================================\n";
    }

    // Generate detailed doctor report - accessing private members
    void generateDoctorReport(const string& doctorId) const {
        const Doctor* doctor = findDoctor(doctorId);
        if (!doctor) {
            cout << "Doctor not found!" << endl;
            return;
        }

        cout << "\n=== DETAILED DOCTOR REPORT ===\n";
        cout << "Doctor ID: " << doctor->doctorId << endl;
        cout << "Name: " << doctor->name << endl;
        cout << "Specialization: " << doctor->specialization << endl;
        cout << "Experience: " << doctor->experience << " years" << endl;
        cout << "Consultation Fee: Rs." << doctor->consultationFee << endl;
        cout << "Availability: " << (doctor->isAvailable ? "Available" : "Busy") << endl;
        cout << "Assigned Patients: ";
        if (doctor->assignedPatients.empty()) {
            cout << "None" << endl;
        } else {
            for (const string& patientName : doctor->assignedPatients) {
                cout << patientName << " ";
            }
            cout << endl;
        }
        cout << "==============================\n";
    }

    // Display all patients
    void displayAllPatients() const {
        cout << "\n=== ALL PATIENTS ===\n";
        if (patients.empty()) {
            cout << "No patients registered!" << endl;
            return;
        }
        for (const auto& patient : patients) {
            patient.displayBasicInfo();
        }
        cout << endl;
    }

    // Display all doctors
    void displayAllDoctors() const {
        cout << "\n=== ALL DOCTORS ===\n";
        if (doctors.empty()) {
            cout << "No doctors available!" << endl;
            return;
        }
        for (const auto& doctor : doctors) {
            doctor.displayBasicInfo();
        }
        cout << endl;
    }

    // Hospital statistics
    void displayHospitalStats() const {
        int admittedCount = 0;
        double totalRevenue = 0.0;

        for (const auto& patient : patients) {
            if (patient.isAdmitted) admittedCount++;
            totalRevenue += patient.billAmount;
        }

        cout << "\n=== HOSPITAL STATISTICS ===\n";
        cout << "Hospital: " << hospitalName << endl;
        cout << "Total Patients: " << patients.size() << endl;
        cout << "Currently Admitted: " << admittedCount << endl;
        cout << "Total Doctors: " << doctors.size() << endl;
        cout << "Total Admissions: " << totalAdmissions << endl;
        cout << "Total Revenue: Rs." << totalRevenue << endl;
        cout << "===========================\n";
    }

private:
    // Helper functions to find patients and doctors
    Patient* findPatient(const string& patientId) {
        for (auto& patient : patients) {
            if (patient.patientId == patientId) return &patient;
        }
        return nullptr;
    }

    const Patient* findPatient(const string& patientId) const {
        for (const auto& patient : patients) {
            if (patient.patientId == patientId) return &patient;
        }
        return nullptr;
    }

    Doctor* findDoctor(const string& doctorId) {
        for (auto& doctor : doctors) {
            if (doctor.doctorId == doctorId) return &doctor;
        }
        return nullptr;
    }

    const Doctor* findDoctor(const string& doctorId) const {
        for (const auto& doctor : doctors) {
            if (doctor.doctorId == doctorId) return &doctor;
        }
        return nullptr;
    }
};

// Initialize static member
int Hospital::totalAdmissions = 0;

int main() {
    Hospital hospital("City General Hospital");

    // Add doctors using object creation
    hospital.addDoctor(Doctor("D001", "Dr. Sarah Wilson", "Cardiology", 15, 1500.0));
    hospital.addDoctor(Doctor("D002", "Dr. John Smith", "Neurology", 12, 2000.0));
    hospital.addDoctor(Doctor("D003", "Dr. Emily Davis", "Pediatrics", 8, 1200.0));

    // Add patients using object creation
    hospital.addPatient(Patient("P001", "Alice Johnson", 45, "Heart Disease"));
    hospital.addPatient(Patient("P002", "Bob Brown", 35, "Migraine"));
    hospital.addPatient(Patient("P003", "Carol White", 8, "Fever"));

    // Display initial state
    hospital.displayAllDoctors();
    hospital.displayAllPatients();

    // Admit patients (demonstrates friend class accessing private members)
    cout << "\n=== ADMITTING PATIENTS ===\n";
    hospital.admitPatient("P001", "D001");
    hospital.admitPatient("P002", "D002");
    hospital.admitPatient("P003", "D003");

    // Generate detailed reports (friend access to private data)
    hospital.generatePatientReport("P001");
    hospital.generateDoctorReport("D001");

    // Display updated state
    hospital.displayAllPatients();
    hospital.displayAllDoctors();

    // Discharge a patient
    cout << "\n=== DISCHARGING PATIENT ===\n";
    hospital.dischargePatient("P001", 5000.0);

    // Final statistics
    hospital.displayHospitalStats();

    return 0;
}