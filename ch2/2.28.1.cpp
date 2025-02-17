#include <iostream>
#include <iomanip>
using namespace std;

/*
Author: Michael Shih
Date: 2/9/25
Lab Assignment: 2.28 LAB: Divide input integers

- Cursor AI was used to autocomplete and assist with function implementations.
- Additional modifications and debugging were done manually.
*/

/*
Given 4 integers, output their product and their average using integer arithmetic.

Note: End with a newline.*/

int main()
{
   long num1;
   long num2;
   long num3;
   long num4;
   int product;
   int average;
   double product2;
   double average2;

   /* Type your code here. */
   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;

   product = num1 * num2 * num3 * num4;
   average = (num1 + num2 + num3 + num4) / 4;
   product2 = num1 * num2 * num3 * num4 * 1.0;
   average2 = (num1 + num2 + num3 + num4) / 4.0;

   cout << product << " ";
   cout << average << endl;
   cout << fixed << setprecision(3) << product2 << " ";
   cout << fixed << setprecision(3) << average2 << " ";

   return 0;
}
