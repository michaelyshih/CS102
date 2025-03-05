#include <iostream>
using namespace std;

/*
Write a program whose input is two integers,
whose output is the first integer and subsequent increments of 5
as long as the value is less than or equal to the second integer.
*/

int main() {

   /* Type your code here. */
   int x, y;

   cin >> x >> y;

   if (x > y) {
      cout << "Second integer can't be less than the first." << endl; return 0;
   }

   while (x <= y) {
      cout << x << " ";
      x += 5;
   }

   cout << endl;

return 0;
}
