#include <iostream>
#include <vector>
using namespace std;

/*
Write the InputPurchases() function in the Deliveries class. Within InputPurchases(), use cin to read each row number until -999 is read from input. If the row number is not equal to -999, use the Purchase object's ReadDetails() function to read the purchase's food and option from input and append the Purchase object to vector purchaseList.

Ex: If the input is:

1 carrot A
2 pepper C
3 persimmon B
4 melon D
-999
*/

class Purchase
{
public:
   void ReadDetails();
   void Print() const;

private:
   string food;
   char option;
};

void Purchase::ReadDetails()
{
   cin >> food;
   cin >> option;
}

void Purchase::Print() const
{
   cout << "Purchase: " << food << ", Option: " << option << endl;
}

class Deliveries
{
public:
   void InputPurchases();
   void PrintPurchases();

private:
   vector<Purchase> purchaseList;
};

/* Your code goes here */
void Deliveries::InputPurchases()
{
   Purchase currPurchase;
   int rowNum;

   cin >> rowNum;

   while (rowNum != -999)
   {
      currPurchase.ReadDetails();
      purchaseList.push_back(currPurchase);
      cin >> rowNum;
   }
}

void Deliveries::PrintPurchases()
{
   Purchase currPurchase;
   unsigned int i;

   for (i = 0; i < purchaseList.size(); ++i)
   {
      currPurchase = purchaseList.at(i);
      currPurchase.Print();
   }
}

int main()
{
   Deliveries deliveries;

   deliveries.InputPurchases();
   deliveries.PrintPurchases();

   return 0;
}
