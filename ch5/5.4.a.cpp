#include <iostream>
using namespace std;

/*
Complete the function InchesToCentimeters() that has one integer parameter as a
length in inches. The function returns a double as the length converted to
centimeters, given that 1 inch = 2.54 centimeters.

Ex: If the input is 27, then the output is:

68.58 centimeters*/

double InchesToCentimeters(int userInches) {
   const double IN_TO_CM = 2.54;

   /* Your code goes here */
   return userInches * IN_TO_CM;

}

int main() {
   int numInches;

   cin >> numInches;

   cout << InchesToCentimeters(numInches);
	cout << " centimeters" << endl;

   return 0;
}
