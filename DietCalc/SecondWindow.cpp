#include "SecondWindow.h"
#include "DietCalc.h"
#include <iostream>
#include <vector>
#include <memory>
#include <unordered_map>


static std::vector <Food*> foodVector;
static double totalCalories = 0;
static double currentCalories = 0;
static bool mealPicked = false;

SecondWindow::SecondWindow(QWidget *parent)
	: QWidget(parent) {
	ui.setupUi(this);

	foodVector.reserve(5);
	insertItems();


	for (auto food : foodVector) {
		ui.itemBox->addItem(QString::fromStdString(food->getName()));
	}
}

SecondWindow::~SecondWindow() {
}


void SecondWindow::insertItems() {
	foodVector.emplace_back(new Food("Carrot", 100.0, 0.0, 80.0, 20.0));
	foodVector.emplace_back(new Food("Chicken", 300.0, 20.0, 0.0, 80.0));
	foodVector.emplace_back(new Food("Soup", 500.0, 99.0, 0.0, 1.0));
	foodVector.emplace_back(new Food("Pasta", 111.0, 22.0, 0.0, 33.0));
	foodVector.emplace_back(new Food("Cheese", 666.0, 77.0, 0.0, 11.0));
}

Food* SecondWindow::getCurrentObject() {
	auto current = ui.itemBox->currentIndex();
	return foodVector[current];
}
void SecondWindow::on_pickButton_clicked() {
	auto myItem = getCurrentObject();
	myItem->setMass(ui.massEdit->text().toDouble());
	if (myItem->foodMapEmpty())
		myItem->getFoodContents();
	else
		myItem->updateFoodContents();
	ui.contentsBrowser->setText(QString::fromStdString(myItem->showContents()));
	currentCalories = myItem->getCalories();
}


void SecondWindow::on_chooseButton_clicked() {
	mealPicked = false;
	if (!mealPicked)
		changeCalories();
}

void SecondWindow::on_undoButton_clicked() {
	if (mealPicked)
		changeCalories();
}

void SecondWindow::changeCalories() {
	if (mealPicked) {
		totalCalories -= currentCalories;
		mealPicked = false;
	}
	else {
		totalCalories += currentCalories;
		mealPicked = true;
	}

	QString addedCalories = "Total Calories: " + QString::number(totalCalories);
	ui.totalcaloriesLabel->setText(addedCalories);
}