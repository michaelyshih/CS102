#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

/*
For this program, adjust the values by dividing all values by the largest value.
The input begins with an integer indicating the number of floating-point values
that follow. Assume that the list will always contain positive floating-point
values.

Output each floating-point value with two digits after the decimal point, which
can be achieved by executing cout << fixed << setprecision(2); once before all
other cout statements.

Ex: If the input is:

5
30.0 50.0 10.0 100.0 65.0
the output is:

0.30 0.50 0.10 1.00 0.65
The 5 indicates that there are five floating-point values in the list,
namely 30.0, 50.0, 10.0, 100.0, and 65.0. 100.0 is the largest value in the
list, so each value is divided by 100.0.

For coding simplicity, follow every output value by a space, including the last
one.
*/

int main() {
   /* Type your code here. */
   int numFloats;
   float maxVal = 0.0;
   cin >> numFloats;
   vector<float> floatList(numFloats);
   for (int i = 0; i < numFloats; i++) {
      cin >> floatList[i];
      if (floatList[i] > maxVal) {
         maxVal = floatList[i];
      }
   }
   cout << fixed << setprecision(2);
   for (int i = 0; i < floatList.size(); i++) {
      cout << floatList[i] / maxVal << " ";
   }
   cout << endl;
   

   return 0;
}
