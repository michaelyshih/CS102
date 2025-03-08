#include <iostream>
using namespace std;

/*
Read two strings and two integers from input and call PrintProductCost() twice:
once with the first and third inputs as arguments, and again with the second and
fourth inputs as arguments.

Ex: If the input is peach vindaloo 4 17, then the output is:

One peach costs 4 dollars.
One vindaloo costs 17 dollars.
*/

void PrintProductCost(string foodName, int price) {
   cout << "One " << foodName << " costs " << price << " dollars." << endl;
}

int main() {

   /* Your code goes here */
   string food1;
   string food2;
   int price1;
   int price2;

   cin >> food1;
   cin >> food2;
   cin >> price1;
   cin >> price2;

   PrintProductCost(food1, price1);
   PrintProductCost(food2, price2);

   return 0;
}
