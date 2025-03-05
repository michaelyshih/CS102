#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   /* Type your code here. */

   // Write a program that removes all non alpha characters from the given input.

   string userString;
   string newString;

   getline(cin, userString);
   newString = "";

   for (int i = 0; i < userString.size(); ++i){
    if (isalpha(userString.at(i))){
        newString += userString.at(i);
    }
   }

   cout << newString << endl;

   return 0;
}
