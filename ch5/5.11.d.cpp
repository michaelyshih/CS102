#include <iostream>
#include <vector>
using namespace std;

/*
Define a function IsSumOdd() that takes one integer vector parameter and one
integer parameter. The function computes the sum of the vector's elements that
are less than or equal to the integer parameter. Then, the function returns true
if the sum is odd, and returns false otherwise.

Ex: If the input is:

4
-5 0 7 -4
-4
then the vector has 4 elements {-5, 0, 7, -4}, and the integer parameter is -4.
The output is:

True, the sum of the elements that are less than or equal to -4 is odd.
Note: The sum is zero if no element is less than or equal to the integer
parameter.
*/

/* Your code goes here */
bool IsSumOdd(vector<int> inputVector, int x) {
   int sum = 0;
   for (int i = 0; i < inputVector.size(); i++) {
      if (inputVector.at(i) <= x) {
         sum += inputVector.at(i);
      }
   }
   return sum % 2 != 0;
}

int main() {
   vector<int> inputVector;
   int size;
   int input;
   int i;
   int x;
   bool result;

   // Read the vector's size, and then the vector's elements
   cin >> size;
   for (i = 0; i < size; ++i) {
      cin >> input;
      inputVector.push_back(input);
   }

   cin >> x;

   result = IsSumOdd(inputVector, x);

   if (result) {
		cout << "True, the sum of the elements that are less than or equal to " << x << " is odd." << endl;
	}
	else {
		cout << "False, the sum of the elements that are less than or equal to " << x << " is not odd." << endl;
	}

   return 0;
}
