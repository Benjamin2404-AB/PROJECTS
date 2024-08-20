#include "screen2.h"
#include "recordvitals.h"
#include "ui_screen2.h"
#include "Hospital.h"
#include "globals.h"
#include "registerPatient.h"
#include "assignpatientroom.h"
#include "showdata.h"

screen2::screen2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::screen2)
{
    ui->setupUi(this);
    setWindowTitle("Hospital OPD APP");
    setFixedSize(900, 700);
    setWindowIcon(QIcon(":/images/opdLogo.png"));

    ui->MainMenu->hide();
    ui->Hospital_3->hide();
    showRegHospCard();

}

screen2::~screen2()
{
    delete ui;
    delete h1;
}

void screen2::on_pushButton_clicked()
{
    Hname = ui->Hospital->text();
    Hrooms = ui->numberRooms->text().toInt();


    qDebug() << "Hospital Name:" << Hname;
    qDebug() << "Number of Rooms:" << Hrooms;

    h1 = new Hospital(Hname, Hrooms);
    h1->getRooms(); // This will display the number of rooms in the debug output

    ui->Hospital_3->show();
    //ui->Hospital_3->setTextFormat(Qt::PlainText); // Ensure the label uses plain text format
    ui->Hospital_3->setText("Hospital Name: " + Hname + "\nAvailabe Rooms: " + QString::number(Hrooms));

    ui->MainMenu->show();
    ui->Hospital_3->show();
    hideRegHospCard();

}

void screen2::on_regPatient_clicked()
{
    screen3  *regPPage = new screen3(this, h1); // Create the new page if it doesn't exist

    regPPage->show(); // Show the new page
    this->hide(); // Hide the current window
}


void screen2::on_assiRoom_clicked()
{
    AssignPatientRoom *assignPage = new AssignPatientRoom(this,h1); // Create the new page if it doesn't exist

    assignPage->show(); // Show the new page
    this->hide(); // Hide the current window
}


void screen2::on_showPatient_clicked()
{
    if (!h1) {
        qDebug() << "Hospital instance is null!";
        return;
    }

    showData *displayPage = new showData(this, h1); // Pass the h1 instance

    displayPage->show(); // Show the new page
    this->hide(); // Hide the current window
}

void screen2::on_showRoomAss_clicked()
{
    if (!h1) {
        qDebug() << "Hospital instance is null!";
        return;
    }

    showData *displayPage = new showData(this, h1); // Pass the h1 instance

    displayPage->show(); // Show the new page
    this->hide(); // Hide the current window
}


void screen2::on_recPVitals_clicked(){
    recordVitals *recVit = new recordVitals(this,h1);

    recVit->show();
    this->hide();

}
