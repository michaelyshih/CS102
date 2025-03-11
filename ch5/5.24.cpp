#include <iostream>
#include <vector>
using namespace std;

/*
Define a function named SortVector that takes a vector of integers as a
parameter. SortVector() modifies the vector parameter by sorting the elements in
descending order (highest to lowest). Then write a main program that reads a
list of integers from input, stores the integers (starting from the second
integer) in a vector, calls SortVector(), and outputs the sorted vector. The
first input integer indicates how many numbers are in the list.

Ex: If the input is:

5 10 4 39 12 2
the output is:

39,12,10,4,2,
For coding simplicity, follow every output value by a comma, including the last
one.

Your program must define and call the following function:
void SortVector(vector<int>& myVec)
*/

/* Define your function here */
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/* Define your function here */
void SortVector(vector<int>& myVec) {
   vector<int> bucket(100);

   for (int i = 0; i < myVec.size(); ++i) {
      bucket.at(myVec.at(i))++;
   }

   int i = 0;
   for (int j = bucket.size() - 1; j >= 0; --j) {
      for (int k = 0; k < bucket.at(j); ++k) {
         myVec.at(i++) = j;
      }
   }

   return;
}

int main() {
   /* Type your code here */
   vector<int> myVec;
   int userInput;
   int vecSize;
   cin >> vecSize;

   for (int i = 0; i < vecSize; i++) {
      cin >> userInput;
      myVec.push_back(userInput);
   }

   SortVector(myVec);

   for (int i = 0; i < myVec.size(); i++) {
      cout << myVec.at(i) << ",";
   }
   cout << endl;

   return 0;
}
