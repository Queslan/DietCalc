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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DietCalcClass
{
public:
    QWidget *centralWidget;
    QLabel *nameLabel;
    QLabel *massLabel;
    QComboBox *itemBox;
    QLabel *totalcaloriesLabel;
    QLineEdit *massEdit;
    QTextBrowser *contentsBrowser;
    QPushButton *pickButton;
    QPushButton *undoButton;
    QPushButton *chooseButton;
    QPushButton *testButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DietCalcClass)
    {
        if (DietCalcClass->objectName().isEmpty())
            DietCalcClass->setObjectName(QStringLiteral("DietCalcClass"));
        DietCalcClass->resize(618, 450);
        DietCalcClass->setCursor(QCursor(Qt::CrossCursor));
        centralWidget = new QWidget(DietCalcClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        nameLabel = new QLabel(centralWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(10, 40, 47, 13));
        massLabel = new QLabel(centralWidget);
        massLabel->setObjectName(QStringLiteral("massLabel"));
        massLabel->setGeometry(QRect(10, 110, 47, 13));
        itemBox = new QComboBox(centralWidget);
        itemBox->setObjectName(QStringLiteral("itemBox"));
        itemBox->setGeometry(QRect(190, 50, 111, 22));
        totalcaloriesLabel = new QLabel(centralWidget);
        totalcaloriesLabel->setObjectName(QStringLiteral("totalcaloriesLabel"));
        totalcaloriesLabel->setGeometry(QRect(430, 0, 131, 41));
        massEdit = new QLineEdit(centralWidget);
        massEdit->setObjectName(QStringLiteral("massEdit"));
        massEdit->setGeometry(QRect(190, 110, 113, 20));
        contentsBrowser = new QTextBrowser(centralWidget);
        contentsBrowser->setObjectName(QStringLiteral("contentsBrowser"));
        contentsBrowser->setGeometry(QRect(190, 140, 256, 192));
        pickButton = new QPushButton(centralWidget);
        pickButton->setObjectName(QStringLiteral("pickButton"));
        pickButton->setGeometry(QRect(0, 370, 75, 23));
        undoButton = new QPushButton(centralWidget);
        undoButton->setObjectName(QStringLiteral("undoButton"));
        undoButton->setGeometry(QRect(460, 370, 75, 23));
        chooseButton = new QPushButton(centralWidget);
        chooseButton->setObjectName(QStringLiteral("chooseButton"));
        chooseButton->setGeometry(QRect(540, 370, 75, 23));
        testButton = new QPushButton(centralWidget);
        testButton->setObjectName(QStringLiteral("testButton"));
        testButton->setGeometry(QRect(250, 370, 75, 23));
        DietCalcClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DietCalcClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 618, 21));
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
        nameLabel->setText(QApplication::translate("DietCalcClass", "Name", nullptr));
        massLabel->setText(QApplication::translate("DietCalcClass", "Mass", nullptr));
        totalcaloriesLabel->setText(QApplication::translate("DietCalcClass", "Total Calories: 0", nullptr));
        pickButton->setText(QApplication::translate("DietCalcClass", "Pick", nullptr));
        undoButton->setText(QApplication::translate("DietCalcClass", "Undo", nullptr));
        chooseButton->setText(QApplication::translate("DietCalcClass", "Choose", nullptr));
        testButton->setText(QApplication::translate("DietCalcClass", "TEST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DietCalcClass: public Ui_DietCalcClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIETCALC_H
