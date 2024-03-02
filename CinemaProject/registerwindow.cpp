#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "welcomewindow.h"
#include "Users.h"
#include <ctime>
#include <iostream>

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    resetErrors();
}

int RegisterWindow::getCurrentYear() {
    time_t current_time = time(NULL);
    return (int)(1970 + current_time / 31537970);
}

void RegisterWindow::on_pushButtonRegister_clicked() {
    resetErrors();
    // See if all fields are entered
    bool isGenderEmpty = !ui->radioButtonMale->isChecked() && !ui->radioButtonFemale->isChecked();
    bool isAccountTypeEmpty = !ui->radioButtonAdmin->isChecked() && !ui->radioButtonUser->isChecked();

    bool isUserNameEmpty = ui->lineEditUsername->text().isEmpty();
    bool isPasswordsEmpty = ui->lineEditPassword->text().isEmpty() || ui->lineEditRetype->text().isEmpty();

    bool isDateOfBirthEmpty = ui->lineEditDay->text().isEmpty() || ui->lineEditYear->text().isEmpty();


    if (isGenderEmpty || isAccountTypeEmpty || isUserNameEmpty || isPasswordsEmpty || isDateOfBirthEmpty) {
        ui->labelRegisterError->setVisible(true);
        return;
    }

    bool isError = false;

    // Check if username already exists by looping and breaking if found
    QString username = ui->lineEditUsername->text();
    for(int i = 0; i < usersCount; i++) {
        if(username == usernames[i]) {
            ui->labelUsernameError->setVisible(true);
            isError = true;
            break;
        }
    }

    // Check if passwords are not the same
    QString password = ui->lineEditPassword->text();
    QString reTypedPassword = ui->lineEditRetype->text();
    if(password != reTypedPassword) {
        ui->labelRetypeError->setVisible(true);
        isError = true;
    }

    // Check if age is less than 12
    int age = getCurrentYear() - ui->lineEditYear->text().toInt();
    if(age < 12) {
        ui->labelAgeError->setVisible(true);
        isError = true;
    }

    // Check if we have not reached the max users limit
    if(usersCount == MAX_USERS - 1) {
        isError = true;
    }

    if(isError) {
        return;
    }

    // Add user to arrays
    usernames[usersCount] = username;
    passwords[usersCount] = password;
    ages[usersCount] = age;
    usersCount++;

    for(int i = 0; i < usersCount; i++) {
        std::cout << usernames[i].toStdString() << " " << passwords[i].toStdString() << " " << ages[i] << std::endl;
    }

    hide();
    WelcomeWindow* welcomeWindow = new WelcomeWindow(username, age, this);
    welcomeWindow->show();
}

void RegisterWindow::resetErrors() {
    ui->labelRegisterError->setVisible(false);
    ui->labelAgeError->setVisible(false);
    ui->labelRetypeError->setVisible(false);
    ui->labelUsernameError->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}
