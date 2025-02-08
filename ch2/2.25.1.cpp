#include <iostream>
using namespace std;

// """
// Author: Michael Shih
// Date: 2/9/25
// Lab Assignment: 2.25 LAB: Divide input integers

// - Cursor AI was used to autocomplete and assist with function implementations.
// - Additional modifications and debugging were done manually.
// """

/*Write a program that reads integers userNum and divNum as input,
and outputs userNum divided by divNum three times.

Note: End with a newline.*/

int main() {

   /* Type your code here. */
   int userNum;
   int divNum;

   cin >> userNum;
   cin >> divNum;

   userNum /= divNum;
   cout << userNum << " ";
   userNum /= divNum;
   cout << userNum << " ";
   userNum /= divNum;
   cout << userNum << " ";

   return 0;
}
