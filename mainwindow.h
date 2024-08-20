#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProgressBar>// Include the QProgressBar header
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void NextButton_clicked();

private:
    Ui::MainWindow *ui;
    //QProgressBar *bar;
   // QTimer *timer;
};
#endif // MAINWINDOW_H
