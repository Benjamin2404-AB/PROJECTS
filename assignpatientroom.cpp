#include "assignpatientroom.h"
#include "qmessagebox.h"
#include "ui_assignpatientroom.h"
#include "screen2.h"

AssignPatientRoom::AssignPatientRoom(screen2 *parent, Hospital *hospital)
    : QMainWindow(parent)
    , ui(new Ui::AssignPatientRoom), parent(parent), h1(hospital)
{
    ui->setupUi(this);

    // Retrieve text from UI elements



}

AssignPatientRoom::~AssignPatientRoom()
{
    delete ui;
}

void AssignPatientRoom::on_backtoMain_clicked()
{
    // Hide the current window and show the parent window
    parent->hideRegHospCard(); // Ensure this function exists in screen2
    parent->show(); // Show the existing instance of screen2
    this->hide(); // Hide the current window
}

void AssignPatientRoom::on_pushButton_2_clicked()
{
    QString name = ui->pName->text();
    int rNumber = ui->cRoom->text().toInt();

    // Check if room assignment is successful
    bool success = h1->assignConsultingRoom(name, rNumber);

    // Format the message based on success or failure
    QString message;
    if (success) {
        message = QString("<p style='color: green;'>%1 has been successfully assigned to room %2.</p>")
                      .arg(name)
                      .arg(rNumber);
    } else {
        message = QString("<p style='color: red;'>Failed to assign %1 to room %2. Room may be unavailable or other issue.</p>")
                      .arg(name)
                      .arg(rNumber);
    }

    // Show the message box with the formatted message
    QMessageBox::information(this, "Room Assignment", message);
}

