#include "showdata.h"
#include "screen2.h"
#include "ui_showdata.h"

showData::showData(screen2 *parent, Hospital *hospital)
    : QMainWindow(parent)
    , ui(new Ui::showData)
    , parent(parent)  // Initialize the parent pointer
    , h1(hospital)
{
    ui->setupUi(this);
    ui->tableData->setColumnCount(8);
    setFixedSize(900, 700);
    setWindowIcon(QIcon(":/images/opdLogo.png"));

    ui->MainMenu->show();
    ui->patientData->hide();
    ui->backtoMain_2->hide();
    ui->tableData->hide();

    if (!parent) {
        qDebug() << "Parent pointer is null!";
    }
    if (!h1) {
        qDebug() << "Hospital pointer is null!";
    }
}

showData::~showData()
{
    delete ui;
}

void showData::on_backtoMain_clicked()
{
    if (parent) {
        parent->show(); // Show the existing instance of screen2
        this->hide(); // Hide the current window
        qDebug() << "Navigated back to main screen.";

    } else {
        qDebug() << "Parent pointer is null!";
    }
}

void showData::on_showPatient_clicked()
{
    ui->patientData->clear();
    ui->MainMenu->hide();

    if (!h1) {
        qDebug() << "Hospital instance is null!";
        return;
    }
    ui->tableData->show();
    ui->backtoMain_2->show();
    ui->patientData->show();
    QString patList = h1->getPatientsList();
    qDebug()<< patList;
    if (patList.isEmpty()) {
        ui->patientData->setText("No patients registered.");
    } else {
        ui->patientData->setText(patList + "\n");
        QStringList rows = patList.split("\n");

        // Populate table rows
        ui->tableData->setRowCount(rows.size() - 1);

        for (int row = 0; row < rows.size() - 1; ++row) {
            QStringList columns = rows[row].split(",");

            if (columns.size() >= 4) {
                ui->tableData->setItem(row, 0, new QTableWidgetItem(columns[1].split(":")[1])); // Name
                ui->tableData->setItem(row, 1, new QTableWidgetItem(columns[2].split(":")[1])); // Gender
                ui->tableData->setItem(row, 2, new QTableWidgetItem(columns[3].split(":")[1])); // Age
                //ui->tableData->setItem(row, 3, new QTableWidgetItem(columns[3].split(":")[1])); // Room
                // Adjust these if you have more vitals or columns
                // Example for vitals:
                if (columns.size() > 3) {
                    QStringList vitals = columns[3].split(",");
                    if (vitals.size() == 3) {
                        ui->tableData->setItem(row, 4, new QTableWidgetItem(vitals[0].split(":")[1])); // Vital1
                        ui->tableData->setItem(row, 5, new QTableWidgetItem(vitals[1].split(":")[1])); // Vital2
                        ui->tableData->setItem(row, 6, new QTableWidgetItem(vitals[2].split(":")[1])); // Vital3
                        ui->tableData->setItem(row, 7, new QTableWidgetItem(vitals[3].split(":")[1])); // Vital4
                    }
                }
            }
        }

    }
}

void showData::on_showRoomAss_clicked()
{
    ui->patientData->clear();
    ui->MainMenu->hide();

    if (!h1) {
        qDebug() << "Hospital instance is null!";
        return;
    }

    ui->backtoMain_2->show();
    ui->patientData->show();
    QString roomAssignments = h1->showRoomAssignments();
    if (roomAssignments.isEmpty()) {
        ui->patientData->setText("No room assignments available.");
    } else {
        ui->patientData->setText(roomAssignments);

    }
}

void showData::on_backtoMain_2_clicked()
{
    ui->MainMenu->show();
    ui->patientData->hide();
    ui->tableData->hide();
    ui->backtoMain_2->hide();
    qDebug() << "Back to main menu from sub-menu.";

}
