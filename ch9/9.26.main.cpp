#include <iostream>

#include "VendingMachine.h"
using namespace std;

/*
Given three integers as user inputs that represent the number of bottles of
drinks to purchase, to restock, and to purchase afterward, create a
VendingMachine object that performs the following operations:

Purchase the first input number of bottles of drinks
Restock the second input number of bottles of drinks
Purchase the last input number of bottles of drinks
Report inventory
Review the definition of VendingMachine class in VendingMachine.cpp. A
VendingMachine's initial inventory is 20 bottles of drinks.

Ex: If the input is:

5 2 7
the output is:

Inventory: 10 bottles
*/

int main() {
   // TODO: Type your code here.

   int purchase, restock, purchase2;
   cin >> purchase >> restock >> purchase2;
   VendingMachine vendingMachine;
   vendingMachine.Purchase(purchase);
   vendingMachine.Restock(restock);
   vendingMachine.Purchase(purchase2);
   vendingMachine.Report();

   return 0;
}
