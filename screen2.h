#ifndef SCREEN2_H
#define SCREEN2_H

#include "Hospital.h"
//#include "showdata.h"
#include "ui_screen2.h"
#include <QMainWindow>

namespace Ui {
class screen2;
}

class screen2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit screen2(QWidget *parent = nullptr);
    ~screen2();
    QString Hname;
    //void hideRegHospCard();

    void hideRegHospCard() {
        ui->regHospCard->hide();
    }

    void showRegHospCard() {
        ui->regHospCard->show();
    }

private slots:
    void on_pushButton_clicked();

    void on_regPatient_clicked();

    void on_assiRoom_clicked();

    void on_showPatient_clicked();

    void on_showRoomAss_clicked();

    void on_recPVitals_clicked();

private:
    Ui::screen2 *ui;
    Hospital *h1;
    //showData *showDataWindow; // Declare showData window
};

#endif // SCREEN2_H
