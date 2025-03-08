#include <iostream>
using namespace std;

/*
Define a function FindPrize() that takes one integer parameter as the lottery
number, and returns the prize as an integer. The prize is returned as follows:

If the lottery number is 158 or 217, then the prize is $14500.
If the lottery number is 303 or 535, then the prize is $15000.
Otherwise, the prize is $0.
Ex: If the input is 158, then the output is:
*/

/* Your code goes here */
int FindPrize(int lotteryNumber) {
   if (lotteryNumber == 158 || lotteryNumber == 217) {
      return 14500;
   } else if (lotteryNumber == 303 || lotteryNumber == 535) {
      return 15000;
   } else {
      return 0;
   }
}

int main() {
   int lotteryNumber;

   cin >> lotteryNumber;

   cout << FindPrize(lotteryNumber) << endl;

   return 0;
}
