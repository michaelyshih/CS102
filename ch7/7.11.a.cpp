#include <iostream>
#include <iomanip>
using namespace std;

/*
CreditCard is a class with two double* data members pointing to the balance and
interest rate of the credit card, respectively. Two doubles are read from input
to initialize userCard. Use the copy constructor to create a CreditCard object
named copyCard that is a deep copy of userCard.

Ex: If the input is 70.00 0.03, then the output is:

Original constructor called
Called CreditCard's copy constructor
userCard: $70.00 with 3.00% interest rate
copyCard: $140.00 with 6.00% interest rate
*/

class CreditCard {
   public:
      CreditCard(double startingBal = 0.0, double startingInterestRate = 0.0);
      CreditCard(const CreditCard& card);
      void SetBal(double newBal);
      void SetInterestRate(double newInterestRate);
      double GetBal() const;
      double GetInterestRate() const;
      void Print() const;
   private:
      double* bal;
      double* interestRate;
};

CreditCard::CreditCard(double startingBal, double startingInterestRate) {
   bal = new double(startingBal);
   interestRate = new double(startingInterestRate);
   cout << "Original constructor called" << endl;
}

CreditCard::CreditCard(const CreditCard& card) {
   bal = new double;
   *bal = *(card.bal);
   interestRate = new double;
   *interestRate = *(card.interestRate);
   cout << "Called CreditCard's copy constructor" << endl;
}

void CreditCard::SetBal(double newBal) {
   *bal = newBal;
}

void CreditCard::SetInterestRate(double newInterestRate) {
   *interestRate = newInterestRate;
}

double CreditCard::GetBal() const {
   return *bal;
}

double CreditCard::GetInterestRate() const {
   return *interestRate;
}

void CreditCard::Print() const {
   cout << fixed << setprecision(2) << "$" << *bal << " with " << *interestRate * 100 << "\% interest rate" << endl;
}

int main() {
   double bal;
   double interestRate;

   cin >> bal;
   cin >> interestRate;

   CreditCard userCard(bal, interestRate);

   /* Your code goes here */
   CreditCard copyCard(userCard);
   

   copyCard.SetBal(copyCard.GetBal() * 2);
   copyCard.SetInterestRate(copyCard.GetInterestRate() * 2);

   cout << "userCard: ";
   userCard.Print();
   cout << "copyCard: ";
   copyCard.Print();

   return 0;
}
