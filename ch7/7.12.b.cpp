#include <iostream>
#include <iomanip>
using namespace std;

/*
Complete the copy assignment operator to allocate miles with a new pointer member.

Ex: If the input is 263.00, then the output is:

flight1: 1180.50 miles
copyFlight1: 263.00 miles
Destructor called
Destructor called
*/

class Flight {
   public:
      Flight();
      ~Flight();
      void setMiles(double newMiles);
      void Print() const;
      Flight& operator=(const Flight& flightToCopy);
   private:
      double* miles;
};

Flight::Flight() {
   miles = new double;
	*miles = 0.0;
}

Flight::~Flight() {
   cout << "Destructor called" << endl;
   delete miles;
}

Flight& Flight::operator=(const Flight& flightToCopy) {
   if (this != &flightToCopy) {
      delete miles;
		/* Your code goes here */
      miles = new double;      
		*miles = *(flightToCopy.miles);
   }
   
   return *this;
}

void Flight::setMiles(double newMiles) {
	*miles = newMiles;
}

void Flight::Print() const {
   cout << fixed << setprecision(2) << *miles << " miles" << endl;
}

int main(){
   double miles;
   Flight flight1;
   Flight copyFlight1;
   
   cin >> miles;
   
   flight1.setMiles(miles);
   copyFlight1 = flight1;
   flight1.setMiles(1180.50);
   
   cout << "flight1: ";
   flight1.Print();
   cout << "copyFlight1: ";
   copyFlight1.Print();
   
   return 0;
}