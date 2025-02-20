#include <iostream>
using namespace std;

/*
Author: Michael Shih
Date: 2/9/25
Lab Assignment: 2.28 LAB: Divide input integers

- Cursor AI was used to autocomplete and assist with function implementations.
- Additional modifications and debugging were done manually.

Write a program whose inputs are three integers, and whose output is the smallest of the three values.
*/

int main() {

   /* Type your code here. */
   int num1;
   int num2;
   int num3;
   int min;

   cin >> num1;
   cin >> num2;
   cin >> num3;

   min = (num1 < num2) ? num1 : num2;
   min = (min < num3) ? min : num3;

   cout << min << endl;

   return 0;
}
