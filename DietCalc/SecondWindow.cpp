#include "SecondWindow.h"
#include "DietCalc.h"

extern std::vector<Food*> foodVector;
SecondWindow::SecondWindow(QWidget *parent)
	: QWidget(parent) {
	ui.setupUi(this);
}

SecondWindow::~SecondWindow() {
}

void SecondWindow::fillUpContents() {
	auto food = foodVector[0];
	ui.contentsBrowser->setText(QString::fromStdString(food->showContents()));
}

void SecondWindow::on_chooseButton_clicked() {
	fillUpContents();
}