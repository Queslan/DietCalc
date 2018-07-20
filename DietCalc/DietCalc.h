#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DietCalc.h"
#include "SecondWindow.h"

#include "Food.h"


class DietCalc : public QMainWindow
{
	Q_OBJECT

public:
	DietCalc(QWidget *parent = Q_NULLPTR);
	SecondWindow secondWindow;

private slots:
	void on_pickButton_clicked();
	void insertItems();
	void on_chooseButton_clicked();
	void on_undoButton_clicked();
	void on_testButton_clicked();
	void changeCalories();
	Food* getCurrentObject();

private:
	Ui::DietCalcClass ui;
};
