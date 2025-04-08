#include <iostream>
#include <vector>
using namespace std;

/*
Integer numElements is read from input as the number of elements in vector
hourlyPrices. Given the integer vector hourlyPrices, write a for loop to output
the integers in the second half of hourlyPrices. Output each integer followed by
a vertical bar surrounded by spaces (" | ").

Ex: If the input is:

4
58 75 83 101
then the output is:

83 | 101 |
Note: The vector size is always even.
*/

int main() {
   vector<int> hourlyPrices;
   int numElements;
   unsigned int i;
   int price;

   cin >> numElements;

   for (i = 0; i < numElements; ++i) {
      cin >> price;
      hourlyPrices.push_back(price);
   }

   /* Your code goes here */
   for (i = numElements / 2; i < numElements; ++i) {
      cout << hourlyPrices[i] << " | ";
   }

   cout << endl;

   return 0;
}
