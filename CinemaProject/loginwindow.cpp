#include "loginwindow.h"
#include "Users.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"
#include "registerwindow.h"


LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->labelError->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButtonLogin_clicked()
{
    bool Success = false;
    for (int i = 0; i < usersCount; i++)
    {
        if ((ui->lineEditUsername->text() == usernames[i]) || (ui->lineEditPassword->text() == passwords[i]))
            Success = true;
    }


    if (Success)
    {
    hide();
    WelcomeWindow* welcome = new WelcomeWindow(this);
    welcome->show();
    }
    else
    {
        ui->labelError->setVisible(true);
    }
}


void LoginWindow::on_pushButtonRegister_clicked()
{

}

