#include <iostream>
using namespace std;
/*
The Fibonacci sequence begins with 0 and then 1 follows. All subsequent values
are the sum of the previous two, for example: 0, 1, 1, 2, 3, 5, 8, 13. Complete
the Fibonacci() function, which has an index, n (starting at 0), as a parameter
and returns the nth value in the sequence. Any negative index values should
return -1.

Ex: If the input is:
*/

int Fibonacci(int n) {

   /* Type your code here. */
   int num1, num2;
   num1 = 0;
   num2 = 1;

   for (int i = 0; i < n; i++) {
      if (n == 0) {
         return 0;
      }
      else if (n == 1) {
         return 1;
      }
      else {
         int temp = num2;
         num2 = num1 + num2;
         num1 = temp;
      }
   }
   return num2;

}

int main() {
   int startNum;

   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

   return 0;
}
