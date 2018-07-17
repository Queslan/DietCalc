#include "DietCalc.h"

#include <iostream>
#include <vector>
#include <memory>
#include <unordered_map>

static std::vector <Food> foodVector;
static double totalCalories = 0;
static double currentCalories = 0;
static bool mealPicked = false;

DietCalc::DietCalc(QWidget *parent)
	:QMainWindow(parent) {
	ui.setupUi(this);
	insertItems();

	for (auto food : foodVector) {
		ui.itemBox->addItem(QString::fromStdString(food.getName()));
	}
}


void DietCalc::insertItems() {
	foodVector.emplace_back(Food("Carrot", 100.0, 0.0, 80.0, 20.0));
	foodVector.emplace_back(Food("Chicken", 300.0, 20.0, 0.0, 80.0));
	foodVector.emplace_back(Food("Soup", 500.0, 99.0, 0.0, 1.0));
}
Food DietCalc::getCurrentObject() {
	auto current = ui.itemBox->currentIndex();
	return foodVector[current];
}
void DietCalc::on_pickButton_clicked() {
	auto myItem = getCurrentObject();
	myItem.setMass(ui.massEdit->text().toDouble());
	myItem.getFoodContents();
	ui.contentsBrowser->setText(QString::fromStdString(myItem.showContents()));
	currentCalories = myItem.getCalories();
}

void DietCalc::on_chooseButton_clicked() {
	mealPicked = false;
	if (!mealPicked)
		changeCalories();
}

void DietCalc::on_undoButton_clicked() {
	if (mealPicked)
		changeCalories();
}

void DietCalc::changeCalories() {
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

