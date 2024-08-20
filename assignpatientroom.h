#ifndef ASSIGNPATIENTROOM_H
#define ASSIGNPATIENTROOM_H

#include "screen2.h"
#include <QMainWindow>

namespace Ui {
class AssignPatientRoom;
}

class AssignPatientRoom : public QMainWindow
{
    Q_OBJECT

public:
    explicit AssignPatientRoom(screen2 *parent = nullptr,Hospital *h1 = nullptr);
    ~AssignPatientRoom();

private slots:
    void on_backtoMain_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AssignPatientRoom *ui;
    screen2 *parent;
    Hospital *h1;
};

#endif // ASSIGNPATIENTROOM_H
