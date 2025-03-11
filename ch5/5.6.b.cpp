#include <iostream>
using namespace std;

/*
Define a function OutputVal() that has two integer parameters and outputs the
product of all negative integers, starting with the first integer parameter and
ending with the second, followed by a newline. If no negative integers exist,
assign product with 1. OutputVal() should not return any value.

Ex: If the input is -3 3, then the output is:
-6
*/

/* Your code goes here */
void OutputVal(int a, int b) {
   int product = 1;
   for (int i = a; i <= b; i++) {
      if (i < 0) {
         product *= i;
      }
   }
   cout << product << endl;
}

int main() {
	int numberA;
	int numberB;

	cin >> numberA;
	cin >> numberB;

	OutputVal(numberA, numberB);

	return 0;
}
