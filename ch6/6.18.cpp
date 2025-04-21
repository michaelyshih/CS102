#include <iostream>
#include <vector>  // Must include vector library to use vectors
using namespace std;

/*
Write a program that reads a list of integers and outputs those integers in
reverse. The input begins with an integer indicating the number of integers that
follow. For coding simplicity, follow each output integer by a comma, including
the last one.

Ex: If the input is:

5
2 4 6 8 10
the output is:

10,8,6,4,2,
Hint: First read the integers into a vector, then output the vector in reverse.
*/

int main() {
   vector<int> userInts;  // A vector to hold the user's input integers
   int userSize;

   cin >> userSize;
   /* Type your code here. */
   for (i = 0; i < userSize; ++i) {
      int userInt;
      cin >> userInt;
      userInts.push_back(userInt);
   }

   for (int i = userSize - 1; i >= 0; --i) {
      cout << userInts[i] << ",";
   }

   cout << endl;

   return 0;
}
