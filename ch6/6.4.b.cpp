#include <iostream>
#include <vector>
using namespace std;

/*
Integer numElements is read from input as the number of elements in vector
averageSalary. Given the integer vector averageSalary, write a for loop to
output the integers in the first half of averageSalary in reverse order. Output
an asterisk surrounded by spaces (" * ") after each integer except the last.

Ex: If the input is:

4
89 99 110 112
then the output is:

99 * 89
Note: The vector size is always even.
*/

int main() {
   vector<int> averageSalary;
   int numElements;
   int i;
   int salary;

   cin >> numElements;

   for (i = 0; i < numElements; ++i) {
      cin >> salary;
      averageSalary.push_back(salary);
   }

   /* Your code goes here */
   for (i = numElements / 2 - 1; i >= 0; --i) {
      cout << averageSalary.at(i);
      if (i != 0) {
         cout << " * ";
      }
   }

   cout << endl;

   return 0;
}
