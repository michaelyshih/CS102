#include <iostream>
using namespace std;
/*
Define a function BeginsWith() that has two string parameters. If the first
string starts with the second string, the function prints the first string
followed by "#" and the second string. Otherwise, the function prints "No
success.". End with a newline. The function does not return any value.

Ex: If the input is disperse dis, then the output is:

disperse#dis

Note: userText.find("xy") returns the index of the first occurrence of "xy" in
userText, or string::npos if userText does not contain "xy".
*/

/* Your code goes here */
void BeginsWith(string inputString1, string inputString2) {
   if (inputString1.find(inputString2) == 0) {
      cout << inputString1 << "#" << inputString2 << endl;
   } else {
      cout << "No success." << endl;
   }
}

int main() {
   int i;
   string inputString1;
   string inputString2;

   cin >> inputString1;
   cin >> inputString2;

   BeginsWith(inputString1, inputString2);

   return 0;
}
