/********************************************************************************
** Form generated from reading UI file 'DietCalc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIETCALC_H
#define UI_DIETCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DietCalcClass
{
public:
    QWidget *centralWidget;
    QLabel *caloriesLabel;
    QLabel *titleLabel;
    QPushButton *nextButton;
    QComboBox *mealsBox;
    QLabel *mealsLabel;
    QLineEdit *caloriesEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DietCalcClass)
    {
        if (DietCalcClass->objectName().isEmpty())
            DietCalcClass->setObjectName(QStringLiteral("DietCalcClass"));
        DietCalcClass->resize(633, 540);
        centralWidget = new QWidget(DietCalcClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        caloriesLabel = new QLabel(centralWidget);
        caloriesLabel->setObjectName(QStringLiteral("caloriesLabel"));
        caloriesLabel->setGeometry(QRect(110, 160, 111, 20));
        titleLabel = new QLabel(centralWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(210, 10, 181, 91));
        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(460, 430, 121, 31));
        mealsBox = new QComboBox(centralWidget);
        mealsBox->addItem(QString());
        mealsBox->addItem(QString());
        mealsBox->addItem(QString());
        mealsBox->addItem(QString());
        mealsBox->setObjectName(QStringLiteral("mealsBox"));
        mealsBox->setGeometry(QRect(290, 110, 41, 22));
        mealsLabel = new QLabel(centralWidget);
        mealsLabel->setObjectName(QStringLiteral("mealsLabel"));
        mealsLabel->setGeometry(QRect(130, 110, 101, 20));
        caloriesEdit = new QLineEdit(centralWidget);
        caloriesEdit->setObjectName(QStringLiteral("caloriesEdit"));
        caloriesEdit->setGeometry(QRect(270, 160, 113, 20));
        DietCalcClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DietCalcClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 633, 21));
        DietCalcClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DietCalcClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DietCalcClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DietCalcClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DietCalcClass->setStatusBar(statusBar);

        retranslateUi(DietCalcClass);

        QMetaObject::connectSlotsByName(DietCalcClass);
    } // setupUi

    void retranslateUi(QMainWindow *DietCalcClass)
    {
        DietCalcClass->setWindowTitle(QApplication::translate("DietCalcClass", "DietCalc", nullptr));
        caloriesLabel->setText(QApplication::translate("DietCalcClass", "Total calories wanted", nullptr));
        titleLabel->setText(QApplication::translate("DietCalcClass", "<html><head/><body><p><span style=\" font-size:36pt;\">DietCalc</span></p></body></html>", nullptr));
        nextButton->setText(QApplication::translate("DietCalcClass", "NEXT ->", nullptr));
        mealsBox->setItemText(0, QApplication::translate("DietCalcClass", "3", nullptr));
        mealsBox->setItemText(1, QApplication::translate("DietCalcClass", "4", nullptr));
        mealsBox->setItemText(2, QApplication::translate("DietCalcClass", "5", nullptr));
        mealsBox->setItemText(3, QApplication::translate("DietCalcClass", "6", nullptr));

        mealsLabel->setText(QApplication::translate("DietCalcClass", "Amount of meals", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DietCalcClass: public Ui_DietCalcClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIETCALC_H
