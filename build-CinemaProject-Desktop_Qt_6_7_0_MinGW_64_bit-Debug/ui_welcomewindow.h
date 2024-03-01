/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *labelHello;
    QLabel *labelWelcome;
    QLabel *labelpic;
    QPushButton *pushButtonLogout;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(684, 453);
        labelHello = new QLabel(WelcomeWindow);
        labelHello->setObjectName("labelHello");
        labelHello->setGeometry(QRect(90, 50, 63, 20));
        labelWelcome = new QLabel(WelcomeWindow);
        labelWelcome->setObjectName("labelWelcome");
        labelWelcome->setGeometry(QRect(300, 100, 101, 41));
        labelpic = new QLabel(WelcomeWindow);
        labelpic->setObjectName("labelpic");
        labelpic->setGeometry(QRect(140, 150, 371, 221));
        pushButtonLogout = new QPushButton(WelcomeWindow);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(100, 370, 93, 29));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        labelHello->setText(QCoreApplication::translate("WelcomeWindow", "Hello ", nullptr));
        labelWelcome->setText(QCoreApplication::translate("WelcomeWindow", "Welcome", nullptr));
        labelpic->setText(QCoreApplication::translate("WelcomeWindow", "pic", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
