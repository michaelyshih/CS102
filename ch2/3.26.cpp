#include <iostream>
#include <string>
using namespace std;

/*
Author: Michael Shih
Date: 2/21/25
Lab Assignment: 3.25 LAB: Divide input integers

- Cursor AI was used to autocomplete and assist with function implementations.
- Additional modifications and debugging were done manually.

Many documents use a specific format for a person's name. Write a program whose input is:

firstName middleName lastName

and whose output is:

lastName, firstInitial.middleInitial.
*/

int main() {

   /* Type your code here. */
   // comes in one line and no clear indication of how many letter words...
   // test samples only have 2 or three
   // ideally seperate all three into individual columns for clarity
      // michael michelle Mich Man
         //double first name? double middle name? double lastname?
   // for sake of assignment, assume it's a if-else where there's either middle name or not

   string fullName;
   string firstName;
   string middleName;
   string lastName;
   int firstSpace;
   int lenFirstName;
   int secondSpace;
   bool hasMiddleName;

   getline(cin, fullName);

   // dissect the getline
   // best way is to splice with white space
   // don't have acces to splice methods yet
   //  o (n) with about 6 runthroughs

   firstSpace = fullName.find(" ");          // find first white space
   lenFirstName = firstSpace;                // first name substring - i.e. JOE (0-2) firstSpace would be at index 3, therefore len = 3
   firstName = fullName.substr(0, firstSpace);

   // remove firstName from fullName by replacing it with empty
   fullName.replace(0, lenFirstName + 1, "");

   // find second white space after the first
   secondSpace = fullName.find(" ");

   // check to see if there's second space
   if (secondSpace != string::npos){

      hasMiddleName = true;
      middleName = fullName.substr(0, secondSpace);
      fullName.replace(0, secondSpace + 1, "");
      lastName = fullName;
   }
   else{
      middleName = "";
      lastName = fullName;
   }

   cout << lastName << ", ";
   cout << firstName.at(0) << ".";
   if (hasMiddleName){
      cout << middleName.at(0) << ".";
   }
   cout << endl;

   return 0;
}
