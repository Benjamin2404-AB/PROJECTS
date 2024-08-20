#ifndef SHOWDATA_H
#define SHOWDATA_H

#include <QMainWindow>
#include "Hospital.h"

namespace Ui {
class showData;
}

class screen2; // Forward declaration

class showData : public QMainWindow
{
    Q_OBJECT

public:
    explicit showData(screen2 *parent = nullptr, Hospital *hospital = nullptr);
    ~showData();

private slots:
    void on_backtoMain_clicked();
    void on_showPatient_clicked();

    void on_showRoomAss_clicked();

    void on_backtoMain_2_clicked();

private:
    Ui::showData *ui;
    screen2 *parent; // Pointer to the parent screen2 instance
    Hospital *h1;    // Pointer to the Hospital instance
};

#endif // SHOWDATA_H

