#include "Food.h"
#include <iomanip>

Food::Food(std::string name, double kcal, double fat, double carb, double protein)
	:name(name), kcalPer100(kcal), fatPer100(fat), carbPer100(carb), proteinPer100(protein) {
}

double Food::getFullValue(double value) {
	return mass * value / 100;
}

void Food::getFoodContents() {
	foodMap.emplace("calories", getFullValue(kcalPer100));
	foodMap.emplace("fat", getFullValue(fatPer100));
	foodMap.emplace("carbs", getFullValue(carbPer100));
	foodMap.emplace("proteines", getFullValue(proteinPer100));
}
void Food::updateFoodContents() {
	foodMap.at("calories") = getFullValue(kcalPer100);
	foodMap.at("fat") = getFullValue(fatPer100);
	foodMap.at("carbs") = getFullValue(carbPer100);
	foodMap.at("proteines") = getFullValue(proteinPer100);
}

bool Food::foodMapEmpty() {
	//here
	return foodMap.empty();
}

std::string Food::showContents() {
	std::stringstream ss;
	ss << std::fixed << std::setprecision(2);
	ss << "Food: " << name << "\n";
	for (auto food : foodMap) {
		ss << food.first << ": ";
		ss << food.second << "\n";
	}
	return ss.str();
}

std::string Food::getName() {
	return name;
}

void Food::setMass(double mass) {
	this->mass = mass;
}

double Food::getMass() const {
	return mass;
}

double Food::getCalories() const {
	return foodMap.at("calories");
}