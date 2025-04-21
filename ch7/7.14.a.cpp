#include <iomanip>
#include <iostream>
#include <memory>
using namespace std;

/*
A Flight object has data members velocity and duration, representing the
velocity and the duration values of a flight. Perform the following tasks:

Write a statement that declares variable flight1 as a unique_ptr of type Flight.
Then, in the same statement, initialize flight1 with a dynamically allocated
Flight object returned by new Flight(). Click here for example Ex: If the input
is 2.5 7.5, then the output is:

Flight's velocity: 2.5
Flight's duration: 7.5
Destructor called on Flight (2.5, 7.5)
*/

class Flight {
  public:
   Flight();
   ~Flight();
   void SetValues(double velocityVal, double durationVal);
   void Print();

  private:
   double velocity;
   double duration;
};

Flight::Flight() {
   velocity = 0.0;
   duration = 0.0;
}

Flight::~Flight() {
   cout << fixed << setprecision(1);
   cout << "Destructor called on Flight (" << velocity << ", " << duration
        << ")" << endl;
}

void Flight::SetValues(double velocityVal, double durationVal) {
   velocity = velocityVal;
   duration = durationVal;
}

void Flight::Print() {
   cout << "Flight's velocity: " << fixed << setprecision(1) << velocity
        << endl;
   cout << "Flight's duration: " << fixed << setprecision(1) << duration
        << endl;
}

void RunFlight(double velocityVal, double durationVal) {
   /* Your code goes here */
   unique_ptr<Flight> flight1(new Flight());

   flight1->SetValues(velocityVal, durationVal);
   flight1->Print();
}

int main() {
   double velocity1;
   double duration1;

   cin >> velocity1;
   cin >> duration1;

   RunFlight(velocity1, duration1);

   return 0;
}
