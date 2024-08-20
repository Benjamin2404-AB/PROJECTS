#ifndef REGISTERPATIENT_H
#define REGISTERPATIENT_H

#include "Hospital.h"
#include "screen2.h"
#include <QMainWindow>

namespace Ui {
class screen3;
}

class screen3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit screen3(screen2 *parent = nullptr,Hospital *hospital = nullptr);
    ~screen3();

private slots:


    void on_backtoMain_clicked();

    void on_regPat_clicked();

    void on_Male_clicked(bool checked);

    void on_Female_clicked(bool checked);

private:
    Ui::screen3 *ui;
    screen2 *parent;
    Hospital *h1;
    QString patientname;
    int patientage;
    char gender;
};

#endif // REGISTERPATIENT_H
