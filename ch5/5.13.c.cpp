#include <iostream>
using namespace std;

/*
The function ConvertValue() has an integer parameter. Define a second
ConvertValue() function that has two integer parameters. The first parameter is
the number of dollars and the second parameter is the number of cents. The
function should return the total number of cents.

Ex: If the input is 5 28, then the output is:

5 dollars yields 500 cents.
5 dollars and 28 cents yields 528 cents.
Note: The total number of cents can be found using (dollars * 100) + cents.
*/

int ConvertValue(int dollars) {
   return dollars * 100;
}

/* Your code goes here */
int ConvertValue(int dollars, int cents) {
   return (dollars * 100) + cents;
}


int main() {
   int dollarsUsed;
   int centsUsed;
   int totalCents1;
   int totalCents2;

   cin >> dollarsUsed;
   cin >> centsUsed;

   totalCents1 = ConvertValue(dollarsUsed);
   cout << dollarsUsed << " dollars yields " << totalCents1 << " cents." << endl;

   totalCents2 = ConvertValue(dollarsUsed, centsUsed);
   cout << dollarsUsed << " dollars and " << centsUsed << " cents yields ";
   cout << totalCents2 << " cents." << endl;

   return 0;
}
