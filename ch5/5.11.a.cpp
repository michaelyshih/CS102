#include <iostream>
using namespace std;

/*
Complete the function GetFirstIndex() that has one string parameter and one
character parameter. The function returns the index of the first character in
the string that is equal to the character parameter. If no such character is
found, the function returns -1.

Ex: If the input is rbrhc r, then the output is:

0
*/

int GetFirstIndex(string inputString, char x) {

   /* Your code goes here */
   for (int i = 0; i < inputString.length(); i++) {
      if (inputString.at(i) == x) {
         return i;
      }
   }
   return -1;

}

int main() {
   string inString;
   char x;
   int result;

   cin >> inString;
   cin >> x;

   result = GetFirstIndex(inString, x);

   cout << result << endl;

   return 0;
}
