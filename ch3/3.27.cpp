#include <iostream>
using namespace std;

/*
Author: Michael Shih
Date: 2/21/25
Lab Assignment: 3.25 LAB: Divide input integers

- Cursor AI was used to autocomplete and assist with function implementations.
- Additional modifications and debugging were done manually.

Write a program that creates a login name for a user,
given the user's first name, last name, and a four-digit integer as input.
Output the login name, which is made up of the first six letters of the first name,
followed by the first letter of the last name, an underscore (_),
and then the last digit of the number (use the % operator).
If the first name has less than six letters, then use all letters of the first name.
*/

int main() {

   /* Type your code here. */

   string firstName;
   string lastName;
   int fourDigits;

   cin >> firstName;
   cin >> lastName;
   cin >> fourDigits;

   if (firstName.length() >= 6){
      firstName = firstName.substr(0, 6);
   }

   cout << "Your login name: " << firstName;
   cout << lastName.at(0) << "_" << (fourDigits % 10);
   cout << endl;

   return 0;
}
