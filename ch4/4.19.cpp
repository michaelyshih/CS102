#include <iostream>
using namespace std;

/*
Write a program that takes in a line of text as input, and
outputs that line of text in reverse.
The program repeats, ending when the user enters "Done",
"done", or "d" for the line of text.
*/

int main() {

   /* Type your code here. */

   string userInput;
   string reverseInput;

   getline(cin, userInput);

   while (userInput != "Done" && userInput != "done" && userInput != "d") {
      reverseInput = "";
      for (int i = userInput.size() - 1; i >= 0; --i) {
         reverseInput += userInput.at(i);
      }
      cout << reverseInput << endl;
      getline(cin, userInput);
   }

return 0;
}
