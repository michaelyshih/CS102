#include <iostream>
#include <string>
using namespace std;

/*
input is a character and a string,
output the number of times the char appears in string.
The output should include the input character and use the plural form, n's,
if the number of times the characters appears is not exactly 1.
*/

int main() {
   /* Type your code here. */
   char myChar;
   string myString;
   int count;

   getline(cin, myString);
   myChar = myString.at(0);

   count = 0;

   for (int i = 1; i < myString.size() - 1; ++i) {
      if (myChar == myString.at(i)) {
         count += 1;
      }
   }

   cout << count << " ";
   if (count != 1) {
      cout << myChar << "'s";
   } else {
      cout << myChar;
   }
   cout << endl;

   return 0;
}
