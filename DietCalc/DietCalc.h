#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DietCalc.h"
#include "SecondWindow.h"



class DietCalc : public QMainWindow {
	Q_OBJECT

public:
	DietCalc(QWidget *parent = Q_NULLPTR);
private slots:
	void on_nextButton_clicked();


private:
	Ui::DietCalcClass ui;
	SecondWindow secondWindow;
};
