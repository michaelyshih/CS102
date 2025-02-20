#include <iostream>
using namespace std;

/*
Author: Michael Shih
Date: 2/21/25
Lab Assignment: 3.25 LAB: Divide input integers

- Cursor AI was used to autocomplete and assist with function implementations.
- Additional modifications and debugging were done manually.

1) The year must be divisible by 4
2) If the year is a century year (1700, 1800, etc.),
the year must be evenly divisible by 400; therefore, both 1700 and 1800 are not leap years

Some example leap years are 1600, 1712, and 2016.
Write a program that takes in a year and determines whether that year is a leap year.
*/

int main() {

   /* Type your code here. */
   // if year is century -> just check 400
   // if year is not century -> check if divisible by 4

   int inputYear;
   bool isLeapYear;

   cin >> inputYear;

   // assuming no 0 years so modulo will check if century year
   if (inputYear % 100 == 0 ){
      // if it is a century year
      isLeapYear = (inputYear % 400 == 0);
   }
   else{
      isLeapYear = (inputYear % 4 == 0);
   }

   // output based if isLeapYear
   cout << inputYear << " - ";
   if (!isLeapYear){
      cout << "not a ";
   }
   cout << "leap year" << endl;

   return 0;
}
