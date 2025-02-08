#include <iostream>
#include <iomanip>
using namespace std;

// """
// Author: Michael Shih
// Date: 2/9/25
// Lab Assignment: 2.26 LAB: Divide input integers

// - Cursor AI was used to autocomplete and assist with function implementations.
// - Additional modifications and debugging were done manually.
// """

/*Write a program using inputs age (years), weight (pounds), heart rate (beats per minute),
and time (minutes), respectively. Output the average calories burned for a person.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.*/

int main() {

   /* Type your code here. */
   int age;
   double weight;
   double beatsPerMinute;
   int minutes;
   double averageCalories;

   cin >> age;
   cin >> weight;
   cin >> beatsPerMinute;
   cin >> minutes;

   averageCalories = (age * 0.2757 + weight * 0.03295 + beatsPerMinute * 1.0781 - 75.4991) * minutes / 8.368;

   cout << "Calories: ";
   cout << fixed << setprecision(2) << averageCalories << " calories." << endl;

   return 0;
}
