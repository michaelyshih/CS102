/*
Define a function FindUserPremium() that takes two integer parameters as a
person's coverage and the person's age, and returns the person's life insurance
premium per month as an integer. The premium is returned as follows:

Cost per month | Coverage	< 65 years | 65 - 82 years | > 82 years
≤ 45000	      | 30                   | 35            | 40
45001 - 75000	| 45                   | 50            | 60
> 75000	      | 65                   | 75            | 80

Ex: If the input is 40000 64, then the output is:
30

*/
#include <iostream>
using namespace std;

/* Your code goes here */
int FindUserPremium(int coverage, int age) {
   int premium = 0;
   if (coverage <= 45000) {
      if (age < 65) {
         premium = 30;
      } else if (age >= 65 && age <= 82) {
         premium = 35;
      } else {
         premium = 40;
      }
   } else if (coverage >= 45001 && coverage <= 75000) {
      if (age < 65) {
         premium = 45;
      } else if (age >= 65 && age <= 82) {
         premium = 50;
      } else {
         premium = 60;
      }
   } else {
      if (age < 65) {
         premium = 65;
      } else if (age >= 65 && age <= 82) {
         premium = 75;
      } else {
         premium = 80;
      }
   }
   return premium;
   
}

int main() {
   int memberCoverage;
   int userAge;

   cin >> memberCoverage;
   cin >> userAge;

   cout << FindUserPremium(memberCoverage, userAge) << endl;

   return 0;
}
