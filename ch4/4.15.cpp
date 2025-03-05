#include <iomanip>
#include <iostream>
using namespace std;

/*
Write a program that takes any number of non-negative integers as input, and
outputs the max and average. A negative integer ends the input and is not
included in the statistics. Assume the input contains at least one non-negative
integer.
*/

int main() {
   /* Type your code here. */
   int userInput;
   int count;
   double average;
   int max;

   cin >> userInput;
   max = 0;
   count = 0;

   while (userInput >= 0) {
      average += userInput;  // average = 15, 30, 30, 33
      if (userInput > max) {
         max = userInput;
      }
      count++;  // 1, 2, 3, 4,
      cin >> userInput;
   }

   average /= count;

   cout << max << " ";
   cout << fixed << setprecision(2) << average << endl;

   return 0;
}
