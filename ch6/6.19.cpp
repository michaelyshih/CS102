#include <iostream>
#include <vector>  // Must include vector library to use vectors
using namespace std;

/*
Given a sorted list of integers, output the middle integer. A negative number
indicates the end of the input (the negative number is not a part of the sorted
list). Assume the number of integers is always odd.

Ex: If the input is:

2 3 4 8 11 -1
the output is:

Middle item: 4
The maximum number of list values for any test case should not exceed 9. If
exceeded, output "Too many numbers".

Hint: First read the data into a vector. Then, based on the number of items,
find the middle item.
*/

int main() {
   /* Type your code here. */
   int inputVal;
   vector<int> numList;
   int i;
   int middleIndex;

   cin >> inputVal;

   while (inputVal >= 0) {
      numList.push_back(inputVal);
      cin >> inputVal;
   }

   if (numList.size() > 9) {
      cout << "Too many numbers" << endl;
      return 0;
   }

   middleIndex = numList.size() / 2;

   cout << "Middle item: " << numList.at(middleIndex) << endl;

   return 0;
}
