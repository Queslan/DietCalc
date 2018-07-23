#include "DietCalc.h"
#include <iostream>



DietCalc::DietCalc(QWidget *parent)
	:QMainWindow(parent) {
	ui.setupUi(this);
	//auto dataBase = new DataBase;
	//dataBase->Connect();
}


void DietCalc::on_nextButton_clicked() {
	//int chosenVariant = ui.mealsBox->currentIndex();
	secondWindow.show();
	this->hide();
}