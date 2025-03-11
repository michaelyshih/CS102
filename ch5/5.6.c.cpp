#include <iostream>
using namespace std;

/*
Define a function FindLowestValue() with no parameters that reads integers from
input until a positive integer is read. FindLowestValue() should return the
lowest of the integers read.

Ex: If the input is -50 -30 -5 15, then the output is:

-50
*/

/* Your code goes here */
int FindLowestValue() {
   int num;
   int minVal = 0;

   cin >> num;
   while (num <= 0) {
      if (num < minVal) {
         minVal = num;
      }
      cin >> num;
   }

   return minVal;
}
int main() {
   int minVal;

   minVal = FindLowestValue();

   cout << minVal << endl;

   return 0;
}
