#include "registerPatient.h"
#include "screen2.h"
#include "ui_registerPatient.h"
#include "globals.h"
#include "Hospital.h"
#include <QMessageBox>

screen3::screen3(screen2 *parent, Hospital *hospital)
    : QMainWindow(parent), ui(new Ui::screen3), parent(parent), h1(hospital), gender('M')
{
    ui->setupUi(this);
    setWindowTitle("Hospital OPD APP");
    setFixedSize(900, 700); // Set a fixed size for the window
    setWindowIcon(QIcon(":/images/opdLogo.png"));
}

screen3::~screen3()
{
    delete ui;
}

void screen3::on_backtoMain_clicked()
{
    // Assuming you want to hide specific elements in the existing screen2
    parent->hideRegHospCard(); // Use the existing instance
    parent->show(); // Show the existing instance of screen2
    this->hide(); // Hide the current window
}

void screen3::on_regPat_clicked()
{
    QString patientName = ui->patientName->text();
    int patientAge = ui->patientAge->text().toInt();

    if (patientName.isEmpty() || patientAge <= 0) {
        QMessageBox::warning(this, "Input Error", "Please enter valid patient details.");
        return;
    }

    qDebug() << "Registering patient:" << patientName << ", Age:" << patientAge << ", Gender:" << (gender == 'M' ? "Male" : "Female");
    h1->registerPatient(patientName, patientAge, gender);

    // Clear the QLineEdit fields
    ui->patientName->clear(); // Clear the patient name field
    ui->patientAge->clear(); // Clear the patient age field

    QMessageBox::information(this, "Success", "Patient registered successfully!");
}

void screen3::on_Male_clicked(bool checked)
{
    if (checked) {
        gender = 'M';
    }
}

void screen3::on_Female_clicked(bool checked)
{
    if (checked) {
        gender = 'F';
    }
}
