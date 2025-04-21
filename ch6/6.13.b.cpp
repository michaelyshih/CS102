#include <iostream>
using namespace std;

/*
String inputString and integer indexInput are read from input. Overwrite a
character of string inputString with the null character '\0' so the output is
the first indexInput characters in inputString.

Ex: If the input is:

!.Zq4
2
then the output is:

!.
Note: Assume indexInput is always less than inputString's char array size.
*/

int main() {
   char inputString[20];
   int indexInput;

   cin >> inputString;
   cin >> indexInput;

   /* Your code goes here */
   // Overwrite the character at indexInput with '\0'
   inputString[indexInput] = '\0';

   cout << inputString << endl;

   return 0;
}
