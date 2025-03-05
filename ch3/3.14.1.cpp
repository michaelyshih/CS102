#include <iostream>
#include <string>
using namespace std;

// """
// Author: Michael Shih
// Date: 2/17/25
// Lab Assignment: 3.14 LAB: Divide input integers

// - Cursor AI was used to autocomplete and assist with function implementations.
// - Additional modifications and debugging were done manually.
// """

/*Write a program that reads integers userNum and divNum as input,
and outputs userNum divided by divNum three times.

Note: End with a newline.*/

int main() {
   string userInput;
	int strIndex;

   getline(cin, userInput);
	cin >> strIndex;

   /* Your code goes here */
   userInput.at(strIndex) = 'c';

   cout << userInput << endl;

   return 0;
}
