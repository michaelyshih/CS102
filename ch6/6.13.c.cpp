#include <iostream>
using namespace std;

/*
String userInput is read from input. Write a for loop that traverses the string
userInput. Within the loop, overwrite the character '%' in userInput with the
null character '\0'.

Ex: If the input is -G%!, then the output is:

-G

Note: Assume all inputs will contain the character '%'.
*/

int main() {
   char userInput[20];
   int i;

   cin >> userInput;

   /* Your code goes here */
   for (i = 0; userInput[i] != '\0'; ++i) {
      if (userInput[i] == '%') {
         userInput[i] = '\0';
      }
   }

   cout << userInput << endl;

   return 0;
}
