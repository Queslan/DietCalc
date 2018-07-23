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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QLabel *titleLabel;
    QComboBox *itemBox;
    QLineEdit *massEdit;
    QLabel *totalcaloriesLabel;
    QLabel *nameLabel;
    QLabel *massLabel;
    QLabel *label;
    QPushButton *undoButton;
    QPushButton *chooseButton;
    QTextBrowser *contentsBrowser;
    QPushButton *pickButton;
    QLabel *massLabel_2;

    void setupUi(QWidget *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(880, 556);
        titleLabel = new QLabel(SecondWindow);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(340, 0, 181, 91));
        itemBox = new QComboBox(SecondWindow);
        itemBox->setObjectName(QStringLiteral("itemBox"));
        itemBox->setGeometry(QRect(340, 90, 111, 22));
        massEdit = new QLineEdit(SecondWindow);
        massEdit->setObjectName(QStringLiteral("massEdit"));
        massEdit->setGeometry(QRect(340, 140, 113, 20));
        totalcaloriesLabel = new QLabel(SecondWindow);
        totalcaloriesLabel->setObjectName(QStringLiteral("totalcaloriesLabel"));
        totalcaloriesLabel->setGeometry(QRect(640, 40, 131, 41));
        nameLabel = new QLabel(SecondWindow);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(200, 90, 47, 13));
        massLabel = new QLabel(SecondWindow);
        massLabel->setObjectName(QStringLiteral("massLabel"));
        massLabel->setGeometry(QRect(200, 140, 47, 13));
        label = new QLabel(SecondWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(720, 450, 101, 20));
        undoButton = new QPushButton(SecondWindow);
        undoButton->setObjectName(QStringLiteral("undoButton"));
        undoButton->setGeometry(QRect(440, 440, 75, 23));
        chooseButton = new QPushButton(SecondWindow);
        chooseButton->setObjectName(QStringLiteral("chooseButton"));
        chooseButton->setGeometry(QRect(520, 440, 75, 23));
        contentsBrowser = new QTextBrowser(SecondWindow);
        contentsBrowser->setObjectName(QStringLiteral("contentsBrowser"));
        contentsBrowser->setGeometry(QRect(230, 200, 256, 192));
        pickButton = new QPushButton(SecondWindow);
        pickButton->setObjectName(QStringLiteral("pickButton"));
        pickButton->setGeometry(QRect(110, 440, 75, 23));
        massLabel_2 = new QLabel(SecondWindow);
        massLabel_2->setObjectName(QStringLiteral("massLabel_2"));
        massLabel_2->setGeometry(QRect(490, 520, 47, 13));

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QWidget *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "SecondWindow", nullptr));
        titleLabel->setText(QApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:36pt;\">DietCalc</span></p></body></html>", nullptr));
        totalcaloriesLabel->setText(QApplication::translate("SecondWindow", "Total Calories: 0", nullptr));
        nameLabel->setText(QApplication::translate("SecondWindow", "Name", nullptr));
        massLabel->setText(QApplication::translate("SecondWindow", "Mass", nullptr));
        label->setText(QApplication::translate("SecondWindow", "SecondWindow", nullptr));
        undoButton->setText(QApplication::translate("SecondWindow", "Undo", nullptr));
        chooseButton->setText(QApplication::translate("SecondWindow", "Choose", nullptr));
        pickButton->setText(QApplication::translate("SecondWindow", "Pick", nullptr));
        massLabel_2->setText(QApplication::translate("SecondWindow", "Mass", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
