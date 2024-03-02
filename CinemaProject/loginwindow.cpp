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
    bool isCorrect = false;
    int indexFound = -1;
    for (int i = 0; i < usersCount; i++)
    {
        // Check if username and password are the same
        if ((ui->lineEditUsername->text() == usernames[i]) && (ui->lineEditPassword->text() == passwords[i])){
            isCorrect = true;
            indexFound = i;
            break;
        }
    }


    if (isCorrect)
    {
        hide();
        WelcomeWindow* welcome = new WelcomeWindow(usernames[indexFound], ages[indexFound], this);
        welcome->show();
    }
    else
    {
        ui->labelError->setVisible(true);
    }
}


void LoginWindow::on_pushButtonRegister_clicked()
{
    hide();
    RegisterWindow* registerWindow = new RegisterWindow(this);
    registerWindow->show();
}

