#include <iostream>
using namespace std;

/*
Define a function InspectVals() with no parameters that reads integers from
input until -99 is read. InspectVals() should return true if all integers read
before -99 are even. Otherwise, InspectVals() should return false.

Ex: If the input is 90 10 40 -99, then the output is:

All true
*/

/* Your code goes here */
bool InspectVals() {
   int num;
   bool allEven = true;

   cin >> num;
   while (num != -99) {
      if (num % 2 != 0) {
         allEven = false;
      }
      cin >> num;
   }

   return allEven;
}

int main() {
   bool allEven;

   allEven = InspectVals();

   if (allEven) {
      cout << "All true" << endl;
   } else {
      cout << "Not all true" << endl;
   }

   return 0;
}
