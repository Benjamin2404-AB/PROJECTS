// Patient.h
#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include "Vitals.h" // Ensure this file includes the definition of the Vitals class

class Patient {
private:
    int patientID;
    QString patientName;
    int patientAge;
    char gender;
    Vitals vitals;

public:
    // Default Constructor
    Patient()
        : patientID(0), patientName(""), patientAge(0), gender('U'), vitals() {}

    // Parameterized Constructor
    Patient(int id, const QString& name, int age, char gender, const Vitals& v)
        : patientID(id), patientName(name), patientAge(age), gender(gender), vitals(v) {}

    // Copy Constructor
    Patient(const Patient& other)
        : patientID(other.patientID), patientName(other.patientName), patientAge(other.patientAge),
        gender(other.gender), vitals(other.vitals) {}

    // Assignment Operator
    Patient& operator=(const Patient& other) {
        if (this != &other) { // Self-assignment check
            patientID = other.patientID;
            patientName = other.patientName;
            patientAge = other.patientAge;
            gender = other.gender;
            vitals = other.vitals;
        }
        return *this;
    }
    void setVitals(const Vitals& v) { vitals = v; }
    // Getter methods
    int getID() const { return patientID; }
    QString getName() const { return patientName; }
    int getAge() const { return patientAge; }
    char getGender() const { return gender; }
    Vitals getVitals() const { return vitals; }
};

#endif // PATIENT_H
