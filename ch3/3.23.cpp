#include <iostream>
using namespace std;

/*
Author: Michael Shih
Date: 2/20/25
Lab Assignment: 3.23 LAB: Divide input integers

- Cursor AI was used to autocomplete and assist with function implementations.
- Additional modifications and debugging were done manually.

Primary U.S. interstate highways are numbered 1-99.
Odd numbers (like the 5 or 95) go north/south,
evens (like the 10 or 90) go east/west.
Auxiliary highways are numbered 100-999,
service the primary highway indicated by the rightmost two digits.
Thus, I-405 services I-5, and I-290 services I-90.

Note: 200 is not a valid auxiliary highway because 00 is not a valid primary highway number.

Given a highway number, indicate whether it is a primary or auxiliary highway.
If auxiliary, indicate what primary highway it serves.
Also indicate if the (primary) highway runs north/south or east/west.
*/

int main() {

   /* Type your code here. */
   // if 1 < i and i >= 1000 - invalid
   // if < 100 primary else auxiliary
   // if auxiliary && i % 100 == 0 invalid
   // if even north/south else east/west

   int interstate;
   bool isInvalid = false;
   bool isPrimary = false;
   string dir = "";

   cin >> interstate;

   bool isDoubleZero = (interstate % 100 == 0);

   if ((1 < interstate && interstate >= 1000) || isDoubleZero ){
      isInvalid = true;
   }

   isPrimary = (interstate < 100 ) ? true : false;

   if (interstate % 2 == 0){
      dir = "east/west.";
   }
   else{
      dir = "north/south.";
   }

   if (isInvalid){
      cout << interstate << " is not a valid interstate highway number.";
   }
   else {
      cout << "I-" << interstate << " is ";
      if (isPrimary){
         cout << "primary";
      }
      else {
         cout << "auxiliary, serving I-";
         cout << interstate % 100;
      }

      cout << ", going ";
      cout << dir;
   }

   cout << endl;

   return 0;
}
