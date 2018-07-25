#include "pch.h"
#include "Food.h"

struct FoodTest : testing::Test {
	Food* food;
	FoodTest() {
		food= new Food("calmary", 12, 23, 12, 30);
	}
	~FoodTest() {
		delete food;
	}

};

TEST_F(FoodTest, setMass) {
	food->setMass(1234);
	EXPECT_EQ(food->getMass(), 1234);
}