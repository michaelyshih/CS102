#include <iostream>
using namespace std;

/*
Author: Michael Shih
Date: 2/9/25
Lab Assignment: 2.28 LAB: Divide input integers

- Cursor AI was used to autocomplete and assist with function implementations.
- Additional modifications and debugging were done manually.

Write total change amount as an integer input,
and fewest coins, one coin type per line.
Dollars, Quarters, Dimes, Nickels, and Pennies.
Use singular and plural coin names as appropriate, like 1 Penny vs. 2 Pennies.
*/

int main() {

   /* Type your code here. */
   int numDollars;
   int numQuarters;
   int numDimes;
   int numNickels;
   int numPennies;
   int changeRemaining;

   cin >> changeRemaining;

   if (changeRemaining == 0){
      cout << "No change" << endl;
      return 0;
   }

   // remove dollars
   numDollars = changeRemaining / 100;
   changeRemaining %= 100;

   // remove quarters
   numQuarters = changeRemaining / 25;
   changeRemaining %= 25;

   // remove dimes
   numDimes = changeRemaining / 10;
   changeRemaining %= 10;

   // remove nickles
   numNickels = changeRemaining / 5;
   changeRemaining %= 5;

   // remaining are pennies
   numPennies = changeRemaining;

   if (numDollars > 0){
      cout << numDollars << " Dollar";
      if (numDollars > 1){
         cout << "s";
      }
      cout << endl;
   }
   if (numQuarters > 0){
      cout << numQuarters << " Quarter";
      if (numQuarters > 1){
         cout << "s";
      }
      cout << endl;
   }
   if (numDimes > 0){
      cout << numDimes << " Dime";
      if (numDimes > 1){
         cout << "s";
      }
      cout << endl;
   }
   if (numNickels > 0){
      cout << numNickels << " Nickel";
      if (numNickels > 1){
         cout << "s";
      }
      cout << endl;
   }
   if (numPennies > 0){
      cout << numPennies << " Penn";
      if (numPennies > 1){
         cout << "ies";
      }
      else {
         cout << "y";
      }
      cout << endl;
   }

   return 0;

}
