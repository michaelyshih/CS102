#include <iomanip>
#include <iostream>

#include "FoodItem.h"

/*
Given main(), complete the FoodItem class (in files FoodItem.h and FoodItem.cpp)
with constructors to initialize each food item. The default constructor should
initialize the name to "Water" and all other class data members to 0.0. The
second constructor should have four parameters (food name, grams of fat, grams
of carbohydrates, and grams of protein) and should assign each class data member
with the appropriate parameter value.
*/

using namespace std;

// Define default constructor
FoodItem::FoodItem() {
   name = "Water";
   fat = 0.0;
   carbs = 0.0;
   protein = 0.0;
}

// Define second constructor with parameters
// to initialize private data members
FoodItem::FoodItem(string foodName, double gramsFat, double gramsCarbs, double gramsProtein) {
   name = foodName;
   fat = gramsFat;
   carbs = gramsCarbs;
   protein = gramsProtein;
}

string FoodItem::GetName() { return name; }

double FoodItem::GetFat() { return fat; }

double FoodItem::GetCarbs() { return carbs; }

double FoodItem::GetProtein() { return protein; }

double FoodItem::GetCalories(double numServings) {
   // Calorie formula
   double calories = ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
   return calories;
}

void FoodItem::PrintInfo() {
   cout << fixed << setprecision(2);
   cout << "Nutritional information per serving of " << name << ":" << endl;
   cout << "  Fat: " << fat << " g" << endl;
   cout << "  Carbohydrates: " << carbs << " g" << endl;
   cout << "  Protein: " << protein << " g" << endl;
}
