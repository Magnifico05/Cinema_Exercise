#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"

WelcomeWindow::WelcomeWindow(QString name, int age, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    ui->labelHello->setText("Hello " + name + " " + QString::number(age));

    QPixmap pix(":/img/images/welcome.png");
    int w = ui->labelpic->width();
    int h = ui->labelpic->height();
    ui->labelpic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

}

void WelcomeWindow::on_pushButtonSignOut_clicked() {
    hide();
    LoginWindow* login = new LoginWindow(this);
    login->show();
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}
