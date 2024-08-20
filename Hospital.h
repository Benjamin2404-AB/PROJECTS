#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "Patient.h"

#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QList>
#include <QVector>
#include <QMap>
#include <QPair>
#include <tuple>

class Hospital {
private:
    QString name;
    QStringList patients;
    int rooms;
    QVector<int> availableRooms;
    QMap<int, Patient> patientRecords;

    QMap<int, std::tuple<QString, int, char>> patientsData;
    QMap<int, QString> roomAssignments;

public:
    Hospital(const QString& n, int r) : name(n), rooms(r) {
        for (int j = 1; j <= r; ++j) {
            availableRooms.push_back(j);
        }
    }
    Patient* getPatientByID(int id) {
        if (patientRecords.contains(id)) {
            return &patientRecords[id];
        }
        return nullptr; // Or handle the case where the patient is not found
    }

    int getRooms() const {
        qDebug() << name;
        qDebug() << "There are" << rooms << "rooms in the hospital.";
        return rooms;
    }

    void registerPatient(const QString& patientName, int age, char gender) {
        int id = patientRecords.size() + 1; // Use patientRecords.size() to generate a new ID
        patientsData[id] = std::make_tuple(patientName, age, gender);
        patients.append(patientName);

        // Create Vitals object for the new patient
        Vitals v;
        v.setTemperature(0.0); // Default values or values from input
        v.setPulseRate(0);
        v.setRespRate(0);
        v.setBloodPressureDys(0.0);
        v.setBloodPressureSys(0.0);

        // Create a new Patient object
        Patient newPatient(id, patientName, age, gender, v);
        patientRecords[id] = newPatient; // Store it in the map

        qDebug() << "Registered patient= ID :" << id << ", Name :" << patientName << ", Age :" << age << ", Gender :" << (gender == 'M' ? "Male" : "Female");
    }

    QString getPatientsList() const {
        QString patientList;

        if (patientRecords.isEmpty()) {
            qDebug() << "No patients registered.";
            return patientList;
        }

        // Iterate through the patientRecords map
        for (auto it = patientRecords.begin(); it != patientRecords.end(); ++it) {
            const Patient& patient = it.value();
            QString gender = (patient.getGender() == 'M') ? "Male" : "Female";

            // Construct the patient details string
            patientList += QString("ID:%1, Name: %2, Age:%3, Gender:%4,")
                               .arg(patient.getID())
                               .arg(patient.getName())
                               .arg(patient.getAge())
                               .arg(gender);

            // Optionally, include vitals if needed
            const Vitals& vis = patient.getVitals();
            patientList += QString("Temperature:%1°C, PulseRate:%2, RespirationRate:%3, BloodPressure:%4/%5\n")
                               .arg(vis.getTemperature())
                               .arg(vis.getPulseRate())
                               .arg(vis.getRespRate())
                               .arg(vis.getBloodPressureSys())
                               .arg(vis.getBloodPressureDys());
        }

        qDebug() << "Patient List:" << patientList;
        return patientList;
    }

    bool isRoomAvailable(int roomNumber) const {
        return availableRooms.contains(roomNumber);
    }

    bool assignRoom(int roomNumber, const QString& patientName) {
        if (isRoomAvailable(roomNumber)) {
            roomAssignments[roomNumber] = patientName;
            availableRooms.removeAll(roomNumber);
            return true;
        }
        return false;
    }

    QString showRoomAssignments() const {
        QString roomAssignmentsString = "Room Assignments:\n";
        for (auto it = roomAssignments.begin(); it != roomAssignments.end(); ++it) {
            roomAssignmentsString += "Room " + QString::number(it.key()) + " => " + it.value() + "\n";
        }
        return roomAssignmentsString;
    }

    bool assignConsultingRoom(const QString& patientName, int roomNumber) {
        bool success = assignRoom(roomNumber, patientName);

        if (success) {
            qDebug() << QString("%1 has been successfully assigned to room %2.")
                            .arg(patientName)
                            .arg(roomNumber);
        } else {
            qDebug() << QString("Failed to assign %1 to room %2. Room may be unavailable or other issue.")
                            .arg(patientName)
                            .arg(roomNumber);
        }

        return success;
    }
};

#endif // HOSPITAL_H
