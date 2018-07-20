#pragma once

#include <QWidget>
#include "ui_SecondWindow.h"

class SecondWindow : public QWidget
{
	Q_OBJECT

public:
	SecondWindow(QWidget *parent = Q_NULLPTR);
	~SecondWindow();

private slots:
	void fillUpContents();
	void on_chooseButton_clicked();
private:
	Ui::SecondWindow ui;
};
