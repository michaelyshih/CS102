#include <iostream>
#include <vector>
using namespace std;

/*
Write a program that first gets a list of integers from input. The input begins
with an integer indicating the number of integers that follow. Then, get the
last value from the input, which indicates a threshold. Output all integers less
than or equal to that last threshold value.

Ex: If the input is:

5
50 60 140 200 75
100
the output is:

50,60,75,
The 5 indicates that there are five integers in the list, namely 50, 60, 140,
200, and 75. The 100 indicates that the program should output all integers less
than or equal to 100, so the program outputs 50, 60, and 75.

For coding simplicity, follow every output value by a comma, including the last
one.

Such functionality is common on sites like Amazon, where a user can filter
results.
*/

int main() {
   /* Type your code here. */

   int numInts;
   cin >> numInts;
   int threshold;

   vector<int> intList(numInts);
   for (int i = 0; i < numInts; i++) {
      cin >> intList[i];
   }

   cin >> threshold;

   for (int i = 0; i < intList.size(); i++) {
      if (intList[i] <= threshold) {
         cout << intList[i] << ",";
      }
   }
   cout << endl;

   return 0;
}
