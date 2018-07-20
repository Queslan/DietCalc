/********************************************************************************
** Form generated from reading UI file 'SecondWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QTextBrowser *contentsBrowser;
    QPushButton *chooseButton;

    void setupUi(QWidget *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(400, 300);
        contentsBrowser = new QTextBrowser(SecondWindow);
        contentsBrowser->setObjectName(QStringLiteral("contentsBrowser"));
        contentsBrowser->setGeometry(QRect(80, 70, 256, 192));
        chooseButton = new QPushButton(SecondWindow);
        chooseButton->setObjectName(QStringLiteral("chooseButton"));
        chooseButton->setGeometry(QRect(310, 270, 75, 23));

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QWidget *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "SecondWindow", nullptr));
        chooseButton->setText(QApplication::translate("SecondWindow", "Choose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
