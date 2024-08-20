#ifndef NEXTPAGE_H
#define NEXTPAGE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class NextPage;
}
QT_END_NAMESPACE

class NextPage : public QWidget {
    Q_OBJECT

public:
    explicit NextPage(QWidget *parent = nullptr);
    ~NextPage();

private:
    Ui::NextPage *ui;
};

#endif // NEXTPAGE_H
