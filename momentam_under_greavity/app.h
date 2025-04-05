#ifndef APP_H
#define APP_H

#include <QWidget>
#include "greavity.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class app;
}
QT_END_NAMESPACE

class app : public QWidget
{
    Q_OBJECT

public:
    greavity* t;
    app(QWidget *parent = nullptr);
    ~app();

private slots:
    void on_enter_clicked();

    void on_clear_clicked();

    void abc(float a);

    void on_reset_clicked();

private:
    Ui::app *ui;
};
#endif // APP_H
