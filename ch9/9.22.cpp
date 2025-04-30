#include <cmath>
#include <iomanip>
#include <iostream>

#include "Car.h"
using namespace std;

/*
Given main(), complete the Car class (in files Car.h and Car.cpp) with member
functions to set and get the purchase price of a car (SetPurchasePrice(),
GetPurchasePrice()), and to output the car's information (PrintInfo()).

Ex: If the input is:

2011
18000
2018
where 2011 is the car's model year, 18000 is the purchase price, and 2018 is the
current year, the output is:

Car's information:
  Model year: 2011
  Purchase price: $18000
  Current value: $5770
Notes:

PrintInfo() should use two spaces for indentation.
Add cout << fixed << setprecision(0); right before printing currentValue to
ignore cents in the output.
*/

void Car::SetModelYear(int userYear) { modelYear = userYear; }

int Car::GetModelYear() const { return modelYear; }

// TODO: Implement SetPurchasePrice() function
void Car::SetPurchasePrice(double purchasePrice) {
   this.purchasePrice = purchasePrice;
}

// TODO: Implement GetPurchasePrice() function
double Car::GetPurchasePrice() const { return purchasePrice; }

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;

   // Car depreciation formula
   currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

// TODO: Implement PrintInfo() function to output modelYear, purchasePrice, and
// currentValue
void Car::PrintInfo() const {
   cout << "Car's information:\n";
   cout << "  Model year: " << modelYear << "\n";
   cout << fixed << setprecision(0);
   cout << "  Purchase price: $" << purchasePrice << "\n";
   cout << "  Current value: $" << currentValue;
}
