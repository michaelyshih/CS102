#ifndef FOODITEMH
#define FOODITEMH

#include <string>

using namespace std;

/*
Given main(), complete the FoodItem class (in files FoodItem.h and FoodItem.cpp)
with constructors to initialize each food item. The default constructor should
initialize the name to "Water" and all other class data members to 0.0. The
second constructor should have four parameters (food name, grams of fat, grams
of carbohydrates, and grams of protein) and should assign each class data member
with the appropriate parameter value.
*/

class FoodItem {
  public:
   // TODO: Declare default constructor
   FoodItem();

   // TODO: Declare second constructor with parameters
   // to initialize private data members
   FoodItem(string foodName, double gramsFat, double gramsCarbs, double gramsProtein);

   string GetName();

   double GetFat();

   double GetCarbs();

   double GetProtein();

   double GetCalories(double numServings);

   void PrintInfo();

  private:
   string name;
   double fat;
   double carbs;
   double protein;
};

#endif
