/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *labelUsername;
    QLabel *labelPassword;
    QLabel *labelRetype;
    QPushButton *pushButtonRegister;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditRetype;
    QGroupBox *groupBoxDateofBirth;
    QLabel *labelMonth;
    QComboBox *comboBoxMonth;
    QLabel *labelDay;
    QLabel *labelYear;
    QLineEdit *lineEditDay;
    QLineEdit *lineEditYear;
    QGroupBox *groupBoxGender;
    QRadioButton *radioButtonMale;
    QRadioButton *radioButtonFemale;
    QGroupBox *groupBoxAccount;
    QRadioButton *radioButtonUser;
    QRadioButton *radioButtonAdmin;
    QGroupBox *groupBoxGenre;
    QCheckBox *checkBoxAction;
    QCheckBox *checkBoxComedy;
    QCheckBox *checkBoxRomance;
    QCheckBox *checkBoxDrama;
    QCheckBox *checkBoxHorror;
    QCheckBox *checkBoxOther;
    QLabel *labelUsernameError;
    QLabel *labelRetypeError;
    QLabel *labelAgeError;
    QLabel *labelRegisterError;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(808, 637);
        labelUsername = new QLabel(RegisterWindow);
        labelUsername->setObjectName("labelUsername");
        labelUsername->setGeometry(QRect(120, 30, 71, 20));
        labelPassword = new QLabel(RegisterWindow);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setGeometry(QRect(120, 70, 71, 20));
        labelRetype = new QLabel(RegisterWindow);
        labelRetype->setObjectName("labelRetype");
        labelRetype->setGeometry(QRect(120, 120, 131, 20));
        pushButtonRegister = new QPushButton(RegisterWindow);
        pushButtonRegister->setObjectName("pushButtonRegister");
        pushButtonRegister->setGeometry(QRect(90, 570, 111, 41));
        lineEditUsername = new QLineEdit(RegisterWindow);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(290, 30, 113, 26));
        lineEditPassword = new QLineEdit(RegisterWindow);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(290, 70, 113, 26));
        lineEditRetype = new QLineEdit(RegisterWindow);
        lineEditRetype->setObjectName("lineEditRetype");
        lineEditRetype->setGeometry(QRect(290, 120, 113, 26));
        groupBoxDateofBirth = new QGroupBox(RegisterWindow);
        groupBoxDateofBirth->setObjectName("groupBoxDateofBirth");
        groupBoxDateofBirth->setGeometry(QRect(80, 170, 371, 121));
        labelMonth = new QLabel(groupBoxDateofBirth);
        labelMonth->setObjectName("labelMonth");
        labelMonth->setGeometry(QRect(10, 30, 63, 20));
        comboBoxMonth = new QComboBox(groupBoxDateofBirth);
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->setObjectName("comboBoxMonth");
        comboBoxMonth->setGeometry(QRect(10, 60, 80, 26));
        labelDay = new QLabel(groupBoxDateofBirth);
        labelDay->setObjectName("labelDay");
        labelDay->setGeometry(QRect(140, 30, 63, 20));
        labelYear = new QLabel(groupBoxDateofBirth);
        labelYear->setObjectName("labelYear");
        labelYear->setGeometry(QRect(260, 30, 63, 20));
        lineEditDay = new QLineEdit(groupBoxDateofBirth);
        lineEditDay->setObjectName("lineEditDay");
        lineEditDay->setGeometry(QRect(130, 60, 51, 26));
        lineEditYear = new QLineEdit(groupBoxDateofBirth);
        lineEditYear->setObjectName("lineEditYear");
        lineEditYear->setGeometry(QRect(250, 60, 51, 26));
        groupBoxGender = new QGroupBox(RegisterWindow);
        groupBoxGender->setObjectName("groupBoxGender");
        groupBoxGender->setGeometry(QRect(80, 300, 161, 91));
        radioButtonMale = new QRadioButton(groupBoxGender);
        radioButtonMale->setObjectName("radioButtonMale");
        radioButtonMale->setGeometry(QRect(20, 30, 110, 24));
        radioButtonFemale = new QRadioButton(groupBoxGender);
        radioButtonFemale->setObjectName("radioButtonFemale");
        radioButtonFemale->setGeometry(QRect(20, 60, 110, 24));
        groupBoxAccount = new QGroupBox(RegisterWindow);
        groupBoxAccount->setObjectName("groupBoxAccount");
        groupBoxAccount->setGeometry(QRect(430, 300, 181, 101));
        radioButtonUser = new QRadioButton(groupBoxAccount);
        radioButtonUser->setObjectName("radioButtonUser");
        radioButtonUser->setGeometry(QRect(10, 30, 110, 24));
        radioButtonAdmin = new QRadioButton(groupBoxAccount);
        radioButtonAdmin->setObjectName("radioButtonAdmin");
        radioButtonAdmin->setGeometry(QRect(10, 60, 110, 24));
        groupBoxGenre = new QGroupBox(RegisterWindow);
        groupBoxGenre->setObjectName("groupBoxGenre");
        groupBoxGenre->setGeometry(QRect(80, 420, 291, 131));
        checkBoxAction = new QCheckBox(groupBoxGenre);
        checkBoxAction->setObjectName("checkBoxAction");
        checkBoxAction->setGeometry(QRect(10, 20, 91, 24));
        checkBoxComedy = new QCheckBox(groupBoxGenre);
        checkBoxComedy->setObjectName("checkBoxComedy");
        checkBoxComedy->setGeometry(QRect(10, 50, 91, 24));
        checkBoxRomance = new QCheckBox(groupBoxGenre);
        checkBoxRomance->setObjectName("checkBoxRomance");
        checkBoxRomance->setGeometry(QRect(10, 80, 91, 24));
        checkBoxDrama = new QCheckBox(groupBoxGenre);
        checkBoxDrama->setObjectName("checkBoxDrama");
        checkBoxDrama->setGeometry(QRect(170, 20, 91, 24));
        checkBoxHorror = new QCheckBox(groupBoxGenre);
        checkBoxHorror->setObjectName("checkBoxHorror");
        checkBoxHorror->setGeometry(QRect(170, 50, 91, 24));
        checkBoxOther = new QCheckBox(groupBoxGenre);
        checkBoxOther->setObjectName("checkBoxOther");
        checkBoxOther->setGeometry(QRect(170, 80, 91, 24));
        labelUsernameError = new QLabel(RegisterWindow);
        labelUsernameError->setObjectName("labelUsernameError");
        labelUsernameError->setGeometry(QRect(480, 30, 151, 20));
        labelRetypeError = new QLabel(RegisterWindow);
        labelRetypeError->setObjectName("labelRetypeError");
        labelRetypeError->setGeometry(QRect(480, 120, 141, 20));
        labelAgeError = new QLabel(RegisterWindow);
        labelAgeError->setObjectName("labelAgeError");
        labelAgeError->setGeometry(QRect(490, 219, 151, 21));
        labelRegisterError = new QLabel(RegisterWindow);
        labelRegisterError->setObjectName("labelRegisterError");
        labelRegisterError->setGeometry(QRect(280, 580, 171, 20));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        labelUsername->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        labelPassword->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        labelRetype->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
        pushButtonRegister->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        groupBoxDateofBirth->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        labelMonth->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        comboBoxMonth->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        comboBoxMonth->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        comboBoxMonth->setItemText(2, QCoreApplication::translate("RegisterWindow", "Mar", nullptr));
        comboBoxMonth->setItemText(3, QCoreApplication::translate("RegisterWindow", "Apr", nullptr));
        comboBoxMonth->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBoxMonth->setItemText(5, QCoreApplication::translate("RegisterWindow", "Jun", nullptr));
        comboBoxMonth->setItemText(6, QCoreApplication::translate("RegisterWindow", "Jul", nullptr));
        comboBoxMonth->setItemText(7, QCoreApplication::translate("RegisterWindow", "Aug", nullptr));
        comboBoxMonth->setItemText(8, QCoreApplication::translate("RegisterWindow", "Sep", nullptr));
        comboBoxMonth->setItemText(9, QCoreApplication::translate("RegisterWindow", "Oct", nullptr));
        comboBoxMonth->setItemText(10, QCoreApplication::translate("RegisterWindow", "Nov", nullptr));
        comboBoxMonth->setItemText(11, QCoreApplication::translate("RegisterWindow", "Dec", nullptr));

        labelDay->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        labelYear->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        groupBoxGender->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButtonMale->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        radioButtonFemale->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBoxAccount->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        radioButtonAdmin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBoxGenre->setTitle(QCoreApplication::translate("RegisterWindow", "Favorite Genre(s)", nullptr));
        checkBoxAction->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBoxComedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBoxRomance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBoxDrama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBoxHorror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBoxOther->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        labelUsernameError->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">* Already Existing</span></p></body></html>", nullptr));
        labelRetypeError->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">* Not Matching</span></p></body></html>", nullptr));
        labelAgeError->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">* Age is less than 12</span></p></body></html>", nullptr));
        labelRegisterError->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">* All fields must be filled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
