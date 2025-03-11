#include <iostream>
using namespace std;

/*
Define a function OutputResult() that has two integer parameters and outputs the
sum of all integers, starting with the first integer parameter and ending with
the second, followed by a newline. OutputResult() should not return any value.


*/

/* Your code goes here */
void OutputResult(int a, int b) {
   int sum = 0;
   for (int i = a; i <= b; i++) {
      sum += i;
   }
   cout << sum << endl;
}

int main() {
   int input1;
   int input2;

   cin >> input1;
   cin >> input2;

   OutputResult(input1, input2);

   return 0;
}
