#include "mainwindow.h"
#include "screen2.h"
#include "ui_mainwindow.h"
#include <QFont>
#include <QLabel>
#include <QVBoxLayout>
#include "WIDGETSTYLE.h"
#include <QProgressBar>
#include <QPushButton>


//#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    //, bar(new QProgressBar(this)) // Initialize bar
    //, timer(new QTimer(this)) // Initialize timer
{
    ui->setupUi(this);
    setWindowTitle("Hospital OPD APP");
    setFixedSize(700, 600); // Set a fixed size for the window
    setWindowIcon(QIcon(":/images/opdLogo.png"));



    // Create a central widget to hold layout and widgets
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    QLabel *label = new QLabel("WELCOME TO OPD APP", this);
    label->setFont(QFont("Poppins", 30));
    label->setStyleSheet(widget_style);
    label->setAlignment(Qt::AlignHCenter);

    QLabel *img = new QLabel(this);
    img->setPixmap(QPixmap(":/images/opdLogo.png"));
    img->setStyleSheet(img_style);
    img->setAlignment(Qt::AlignCenter);
    img->setMaximumSize(700, 700);
    img->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    img->setScaledContents(true);
    /*
    QProgressBar *bar = new QProgressBar(this);
    bar->setRange(0, 100);
    bar->setValue(10); // Example value, set as needed
    bar->setStyleSheet(bar_style);
    bar->setTextVisible(true);*/

    // Center the progress bar by setting size policy
    //bar->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);




    QPushButton *NextButton = new QPushButton("Next", this);


    // Center the button by setting size policy
    NextButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    connect(NextButton, &QPushButton::clicked, this, &MainWindow::NextButton_clicked);

    // Add widgets to the layout
    layout->addWidget(label);
    layout->addWidget(img);
    //layout->addWidget(bar);
    layout->addWidget(NextButton); // Add button to layout

    // Set alignment for the layout to ensure contents are centered
    layout->setAlignment(label, Qt::AlignCenter);
    layout->setAlignment(img, Qt::AlignCenter);
    //layout->setAlignment(bar, Qt::AlignCenter);
    layout->setAlignment(NextButton, Qt::AlignCenter); // Center the button

    // Set the layout for the central widget
    centralWidget->setLayout(layout);

    // Set the central widget for the main window
    setCentralWidget(centralWidget);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NextButton_clicked(){

    screen2  *nextPage = new screen2(); // Create the new page if it doesn't exist

    nextPage->show(); // Show the new page
    this->hide(); // Hide the current window

}


