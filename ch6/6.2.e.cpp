#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> swimmingListings;
   int numDistance;
   int inputVal;
   int i;

   cin >> numDistance;

   for (i = 0; i < numDistance; ++i) {
      cin >> inputVal;
      swimmingListings.push_back(inputVal);
   }

   /* Your code goes here */
   string forward;
   string backward;
   for (i = 0; i < numDistance; ++i) {
      forward = forward + to_string(swimmingListings.at(i)) +  "+";
      backward = to_string(swimmingListings.at(i)) +  "+" + backward;
   }
   cout << forward << endl;
   cout << backward << endl;

   return 0;
}
