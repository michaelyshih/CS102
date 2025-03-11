#include <iostream>
using namespace std;

/*
Define a function named SwapValues that takes four integers as parameters and
swaps the first with the second, and the third with the fourth values. Then
write a main program that reads four integers from input and calls function
SwapValues() to swap the input values. The main program then prints the swapped
values on a single line separated with spaces and ending with a newline.
*/

/* Define your function here */
void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4) {
   int temp1 = userVal1;
   userVal1 = userVal3;
   userVal3 = temp1;

   temp1 = userVal2;
   userVal2 = userVal4;
   userVal4 = temp1;
}

int main() {
   /* Type your code here. Your code must call the function.  */
   int userVal1, userVal2, userVal3, userVal4;
   cin >> userVal1 >> userVal2 >> userVal3 >> userVal4;

   SwapValues(userVal1, userVal2, userVal3, userVal4);

   cout << userVal1 << " " << userVal2 << " " << userVal3 << " " << userVal4 << endl;

   return 0;
}
