#pragma once
#include <string>
#include <sstream>
#include <unordered_map>

class Food {
public:
	Food(std::string name, double kcal, double fat, double carb, double protein);

	double getFullValue(double value);
	void getFoodContents();
	void updateFoodContents();
	bool foodMapEmpty();
	std::string showContents();
	std::string getName();
	void setMass(double mass);
	double getMass()const;
	double getCalories() const;

private:
	std::string name;
	double mass;
	double kcalPer100;
	double fatPer100;
	double carbPer100;
	double proteinPer100;
	std::unordered_map <std::string, double> foodMap;
};