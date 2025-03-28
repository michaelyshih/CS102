#include <cstdlib>
#include <iostream>
using namespace std;

/*
Define a function named CoinFlip that returns "Heads" or "Tails" according to a
random value 1 or 0. Assume the value 1 represents "Heads" and 0 represents
"Tails". Then, write a main program that reads the desired number of coin flips
as an input, calls function CoinFlip() repeatedly according to the number of
coin flips, and outputs the results. Assume the input is a value greater than 0.

Hint: Use the modulo operator (%) to limit the random integers to 0 and 1.

Ex: If the random seed value is 2 and the input is:

3
the output is:

Tails
Heads
Tails
Note: For testing purposes, a pseudo-random number generator with a fixed seed
value is used in the program. The program uses a seed value of 2 during
development, but when submitted, a different seed value may be used for each
test case.

The program must define and call the following function:
string CoinFlip()
*/

/* Define your function here */
string CoinFlip() {
   int random = rand() % 2;
   if (random == 1) {
      return "Heads";
   } else {
      return "Tails";
   }
}

int main() {
   // Add more variables as needed
   int numFlips;
   int i;

   srand(2);  // Unique seed

   /* Type your code here */
   cin >> numFlips;

   for (i = 0; i < numFlips; i++) {
      cout << CoinFlip() << endl;
   }

   return 0;
}
