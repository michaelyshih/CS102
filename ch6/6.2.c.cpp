#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numPeople;
   int firstPerson;
	int middlePerson;
   int lastPerson;
   unsigned int i;

   cin >> numPeople;
   cin >> firstPerson;
	cin >> middlePerson;
   cin >> lastPerson;

   /* Your code goes here */
   vector<int> swimmingListings(9);
   swimmingListings.at(0) = firstPerson;
   swimmingListings.at(4) = middlePerson;
   swimmingListings.at(8) = lastPerson;

   for (i = 0; i < swimmingListings.size(); ++i) {
      cout << swimmingListings.at(i) << " ";
   }
   cout << endl;

   return 0;
}
