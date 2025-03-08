#include <iostream>
#include <iomanip>
using namespace std;
/*
Define a function PrintProductOf2() that has two double parameters, and outputs
"Product: " followed by the parameters' product with a precision of one digit.
End with a newline. PrintProductOf2() should not return any value.

Ex: If the input is -7.0 4.0, then the output is:

Product: -28.0
*/

/* Your code goes here */
void PrintProductOf2(double a, double b) {
   cout << "Product: " << fixed << setprecision(1) << a * b << endl;
}

int main() {
   double a1;
   double b1;

   cin >> a1;
   cin >> b1;

   PrintProductOf2(a1, b1);

   return 0;
}
