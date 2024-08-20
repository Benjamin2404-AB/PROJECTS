#ifndef RECORDVITALS_H
#define RECORDVITALS_H

#include "Hospital.h"
#include <QMainWindow>
#include "screen2.h"

namespace Ui {
class recordVitals;
}

class recordVitals : public QMainWindow
{
    Q_OBJECT

public:
    explicit recordVitals(screen2 *parent = nullptr, Hospital *hospital = nullptr);
    ~recordVitals();

private slots:
    void on_backtoMain_clicked();

    void on_pushButton_clicked();

private:
    Ui::recordVitals *ui;
    screen2 *parent;
    Hospital *h1;
};

#endif // RECORDVITALS_H
