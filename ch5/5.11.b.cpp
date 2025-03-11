#include <iostream>
#include <vector>
using namespace std;

/*
Define a function GetChars() that has one input string parameter, one character
parameter, and one output vector parameter passed by reference. The function
should not return any value. The function finds the characters in the input
string that are not equal to the character parameter, and stores each such
character in the output vector in the same order as the input string.

Ex: If the input is csqv c, then the output is:

s
q
v
*/
/* Your code goes here */
void GetChars(string inputString, const char x, vector<char>& results) {
   for (int i = 0; i < inputString.length(); i++) {
      if (inputString.at(i) != x) {
         results.push_back(inputString.at(i));
      }
   }
}

int main() {
   string inputString;
   int i;
   char x;
   vector<char> results;

   cin >> inputString;
   cin >> x;

   GetChars(inputString, x, results);

   for (i = 0; i < results.size(); ++i) {
      cout << results.at(i) << endl;
   }

   return 0;
}
