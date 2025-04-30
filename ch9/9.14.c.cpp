#include <iostream>
using namespace std;

/*
Four doubles are read from input, where the first two doubles are the hours and
seconds of time1 and the second two doubles are the hours and seconds of time2.
Define two functions to overload the - operator. The first function overloads
the - operator to subtract two time values. The second function overloads the -
operator to subtract a time and a double representing the number of hours.

Ex: If the input is 7.0 19.4 5.0 12.1, then the output is:

7 hours, 19.4 seconds
5 hours, 12.1 seconds
Difference: 2 hours, 7.3 seconds

7 hours, 19.4 seconds
5 hours
Difference: 2 hours, 19.4 seconds
Note: The difference of two time values is:

the difference of the number of hours
the difference of the number of seconds
Note: The difference of a time and a double representing the number of hours is:

the difference of the number of hours and the double
the number of seconds is unchanged
*/

class Time {
  public:
   Time(double hr = 0.0, double sec = 0.0);
   void Print() const;
   Time operator-(Time rhs);
   Time operator-(double rhs);

  private:
   double h;
   double s;
};

Time::Time(double hr, double sec) {
   h = hr;
   s = sec;
}

// No need to accommodate for overflow or negative values

/* Your code goes here */
Time Time::operator-(Time rhs) {
   Time result;
   result.h = h - rhs.h;
   result.s = s - rhs.s;

   if (result.s < 0) {
      result.h--;
      result.s += 60;
   }
   return result;
}
Time Time::operator-(double rhs) {
   Time result;
   result.h = h - rhs;
   result.s = s;

   if (result.s < 0) {
      result.h--;
      result.s += 60;
   }
   return result;
}

void Time::Print() const { cout << h << " hours, " << s << " seconds"; }

int main() {
   double hr1;
   double sec1;
   double hr2;
   double sec2;

   cin >> hr1;
   cin >> sec1;
   cin >> hr2;
   cin >> sec2;

   Time time1(hr1, sec1);
   Time time2(hr2, sec2);

   Time difference1 = time1 - time2;
   Time difference2 = time1 - hr2;

   time1.Print();
   cout << endl;
   time2.Print();
   cout << endl;
   cout << "Difference: ";
   difference1.Print();
   cout << endl;

   cout << endl;

   time1.Print();
   cout << endl;
   cout << hr2 << " hours" << endl;
   cout << "Difference: ";
   difference2.Print();
   cout << endl;

   return 0;
}
