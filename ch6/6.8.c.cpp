#include <iostream>
#include <vector>
using namespace std;

/*
Integer numElements is read from input, representing the number of integers to
be read next. Then, the remaining integers are read and stored into vector
pricesList. Write a loop that assigns vector rotatedList with pricesList's
elements shifted to the left by one index. The element at index 0 of pricesList
should be copied to the end of rotatedList.
*/

int main() {
   int numElements;
   vector<int> pricesList;
   vector<int> rotatedList;
   unsigned int i;
   int inputVal;

   cin >> numElements;

   for (i = 0; i < numElements; ++i) {
      cin >> inputVal;
      pricesList.push_back(inputVal);
   }

   /* Your code goes here */
   for (i = 1; i < pricesList.size(); ++i) {
      rotatedList.push_back(pricesList.at(i));
   }
   rotatedList.push_back(pricesList.at(0));

   cout << "Original prices: ";
   for (i = 0; i < pricesList.size(); ++i) {
      cout << pricesList.at(i) << " ";
   }
   cout << endl;

   cout << "Updated prices: ";
   for (i = 0; i < rotatedList.size(); ++i) {
      cout << rotatedList.at(i) << " ";
   }
   cout << endl;

   return 0;
}
