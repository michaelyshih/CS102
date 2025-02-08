#include <iostream>
#include <cmath>
using namespace std;

/*
Author: Michael Shih
Date: 2/9/25
Lab Assignment: 2.27 LAB: Divide input integers

- Cursor AI was used to autocomplete and assist with function implementations.
- Additional modifications and debugging were done manually.
*/

/* Given three floating-point numbers x, y, and z, output x to the power of z,
x to the power of (y to the power of z), the absolute value of y, and the square
root of (xy to the power of z).

5.0 6.5 3.2
*/

int main()
{
   double x;
   double y;
   double z;

   /* Type your code here. Note: Include the math library above first. */
   cin >> x;
   cin >> y;
   cin >> z;

   cout << pow(x, z) << " ";
   cout << pow(y, z) << " ";
   cout << fabs(y) << " ";
   cout << sqrt(pow(x * y, z)) << endl;

   return 0;
}
