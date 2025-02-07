// Course: CS-102
// Name: Ann Ohlone
// Program Description:  My first program - Prints string to console.
// Details:  Prints a string to the console.
// Software Development Environment: Ubuntu 17.0
// Solution File: helloworld.cpp
// Date: 1/30/22

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
   int totalDollars;
   int numFifties;
   int numTens;
   int numOnes;

   cin >> totalDollars;

   /* Your code goes here */
   numFifties = totalDollars / 50;
   totalDollars %= 50;
   numTens = totalDollars / 10;
   numOnes = totalDollars % 10;

   cout << "50-dollar bills: " << numFifties << endl;
   cout << "10-dollar bills: " << numTens << endl;
   cout << "One-dollar bills: " << numOnes << endl;

   return 0;
}
/*
Hello World!
*/
