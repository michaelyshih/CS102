#include <iomanip>
#include <iostream>
#include <memory>
using namespace std;

/*
A Turkey object has data members age and weight, representing the age and the
weight values of a turkey. Variable turkeyWrapper is a unique_ptr of type Turkey
initialized with a Turkey object. Perform the following tasks:

Call member function SetMemberValues() to assign the Turkey object's age and
weight with the values of ageVal and weightVal, respectively. Call member
function Print() to output the Turkey object's contents. Click here for example
Ex: If the input is 3.0 15.5, then the output is:

Turkey's age: 3.0
Turkey's weight: 15.5
Destructor called on Turkey (3.0, 15.5)
*/

class Turkey {
  public:
   Turkey();
   ~Turkey();
   void SetMemberValues(double ageVal, double weightVal);
   void Print();

  private:
   double age;
   double weight;
};

Turkey::Turkey() {
   age = 0.0;
   weight = 0.0;
}

Turkey::~Turkey() {
   cout << fixed << setprecision(1);
   cout << "Destructor called on Turkey (" << age << ", " << weight << ")"
        << endl;
}

void Turkey::SetMemberValues(double ageVal, double weightVal) {
   age = ageVal;
   weight = weightVal;
}

void Turkey::Print() {
   cout << "Turkey's age: " << fixed << setprecision(1) << age << endl;
   cout << "Turkey's weight: " << fixed << setprecision(1) << weight << endl;
}

void RunTurkey(double ageVal, double weightVal) {
   unique_ptr<Turkey> turkeyWrapper(new Turkey());

   /* Your code goes here */
   turkeyWrapper->SetMemberValues(ageVal, weightVal);
   turkeyWrapper->Print();
   // Destructor is called automatically when turkeyWrapper goes out of scope
   // and is destroyed.
}

int main() {
   double age1;
   double weight1;

   cin >> age1;
   cin >> weight1;

   RunTurkey(age1, weight1);

   return 0;
}
