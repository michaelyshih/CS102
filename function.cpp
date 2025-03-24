#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate compound interest
// Formula: A = P * (1+r/t) ^ (nt)

void main(){

   double compoundInterest(double principal, double rate, double time, double n) {
      return principal * pow((1 + rate / n), (n * time));
   }
   
   return 0;
}
