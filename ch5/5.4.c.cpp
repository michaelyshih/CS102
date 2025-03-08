#include <iomanip>
#include <iostream>
using namespace std;

/*
Define the following functions:

FindBaseArea() has two double parameters as a pyramid's base length and base
width. The function returns the area of the pyramid's base as a double. The area
of the base is calculated by:

FindVolume() has three double parameters as a pyramid's base length, base width,
and height. The function returns the pyramid's volume as a double, and uses the
FindBaseArea() function to calculate the pyramid's base area. The volume is
calculated by:

*/

/* Your code goes here */

double FindBaseArea(double baseLength, double baseWidth) {
   return baseLength * baseWidth;
}

double FindVolume(double baseLength, double baseWidth, double height) {
   return FindBaseArea(baseLength, baseWidth) * height / 3;
}

int main() {
   double userBaseLength;
   double userBaseWidth;
   double userHeight;

   cin >> userBaseLength;
   cin >> userBaseWidth;
   cin >> userHeight;

   cout << fixed << setprecision(1);

   cout << "Base length: " << userBaseLength << endl;
   cout << "Base width: " << userBaseWidth << endl;
   cout << "Height: " << userHeight << endl;

   cout << "Base area: ";
   cout << FindBaseArea(userBaseLength, userBaseWidth) << endl;

   cout << "Volume: ";
   cout << FindVolume(userBaseLength, userBaseWidth, userHeight) << endl;

   return 0;
}
