#include "DietCalc.h"
#include <iostream>



DietCalc::DietCalc(QWidget *parent)
	:QMainWindow(parent) {
	ui.setupUi(this);
}


void DietCalc::on_nextButton_clicked() {
	int chosenVariant = ui.mealsBox->currentIndex();
	secondWindow.setupVariant(chosenVariant);
	secondWindow.show();
	this->hide();
}