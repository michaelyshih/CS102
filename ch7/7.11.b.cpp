#include <iomanip>
#include <iostream>
using namespace std;

/*
CreditCard is a class with two double* data members pointing to the balance and
interest rate of the credit card, respectively. Two doubles are read from input
to initialize myCreditCard. Write a copy constructor for CreditCard that creates
a deep copy of myCreditCard. At the end of the copy constructor, output
"Constructed a new CreditCard object" and end with a newline.

Ex: If the input is 71.00 2.00, then the output is:

Constructed a new CreditCard object
Initial balance: $71.00 with 3.00 interest rate
Constructed a new CreditCard object
After 1 month(s): $284.00
After 2 month(s): $1136.00
After 3 month(s): $4544.00

Custom value interest rate
$71.00 with 2.00 interest rate
*/

class CreditCard {
  public:
   CreditCard(double startingBalance = 0.0, double startingInterestRate = 0.0);
   CreditCard(const CreditCard& card);
   void SetBalance(double newBalance);
   void SetInterestRate(double newInterestRate);
   double GetBalance() const;
   double GetInterestRate() const;
   void Print() const;

  private:
   double* balance;
   double* interestRate;
};

CreditCard::CreditCard(double startingBalance, double startingInterestRate) {
   balance = new double(startingBalance);
   interestRate = new double(startingInterestRate);
}

/* Your code goes here */
CreditCard::CreditCard(const CreditCard& card) {
   balance = new double;
   *balance = *(card.balance);
   interestRate = new double;
   *interestRate = *(card.interestRate);
   cout << "Constructed a new CreditCard object" << endl;
}

void CreditCard::SetBalance(double newBalance) { *balance = newBalance; }

void CreditCard::SetInterestRate(double newInterestRate) {
   *interestRate = newInterestRate;
}

double CreditCard::GetBalance() const { return *balance; }

double CreditCard::GetInterestRate() const { return *interestRate; }

void CreditCard::Print() const {
   cout << fixed << setprecision(2) << "$" << *balance << " with "
        << *interestRate << " interest rate" << endl;
}

void SimulateGrowth(CreditCard c, int months) {
   for (auto i = 1; i <= months; ++i) {
      c.SetBalance(c.GetBalance() * (c.GetInterestRate() + 1.0));
      cout << "After " << i << " month(s): " << "$" << c.GetBalance() << endl;
   }
}

int main() {
   double balance;
   double interestRate;

   cin >> balance;
   cin >> interestRate;

   CreditCard myCreditCard(balance, interestRate);
   CreditCard myCreditCardCopy = myCreditCard;
   myCreditCard.SetInterestRate(interestRate + 1.0);

   cout << "Initial balance: ";
   myCreditCard.Print();
   SimulateGrowth(myCreditCard, 3);
   cout << endl;
   cout << "Custom value interest rate" << endl;
   myCreditCardCopy.Print();

   return 0;
}
