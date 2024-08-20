#include "recordvitals.h"
#include "screen2.h"
#include "ui_recordvitals.h"
#include <QMessageBox>

recordVitals::recordVitals(screen2 *parent, Hospital *hospital)
    : QMainWindow(parent)
    , ui(new Ui::recordVitals),parent(parent), h1(hospital)
{
    ui->setupUi(this);
}

recordVitals::~recordVitals()
{
    delete ui;
}

void recordVitals::on_backtoMain_clicked()
{
    // Assuming you want to hide specific elements in the existing screen2
    parent->hideRegHospCard(); // Use the existing instance
    parent->show(); // Show the existing instance of screen2
    this->hide(); // Hide the current window
}


void recordVitals::on_pushButton_clicked()
{
    // Retrieve data from the input fields
     int patientID = ui->patID->text().toInt(); // Assuming there's an input field for patient ID
    float temperature = ui->temp->text().toDouble();
    int pulseRate = ui->pulserate->text().toInt();
    int respRate = ui->resprate->text().toInt();
    double bloodPressureSys = ui->sys->text().toDouble();
    double bloodPressureDys = ui->dys->text().toDouble();


    // Get the patient from the hospital records
    Patient* patient = h1->getPatientByID(patientID); // Implement this method in Hospital

    if (patient != nullptr) {
        // Update vitals
        Vitals newVitals;
        newVitals.setTemperature(temperature);
        newVitals.setPulseRate(pulseRate);
        newVitals.setRespRate(respRate);
        newVitals.setBloodPressureSys(bloodPressureSys);
        newVitals.setBloodPressureDys(bloodPressureDys);

        patient->setVitals(newVitals); // Implement this method in Patient

        // Optionally, provide feedback to the user
        QMessageBox::information(this, "Success", "Vitals updated successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Patient not found.");
    }
}

