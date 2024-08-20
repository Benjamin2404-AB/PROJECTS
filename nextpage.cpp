#include "nextpage.h"
#include "ui_nextpage.h"

NextPage::NextPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NextPage) {

    ui->setupUi(this);
    setWindowTitle("Next Page");
}

NextPage::~NextPage() {
    delete ui;
}
