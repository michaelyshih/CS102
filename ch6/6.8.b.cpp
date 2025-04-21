#include <iostream>
#include <vector>
using namespace std;

/*
Integer numMostPopular is read from input, representing the size of vectors,
aprMostPopular and julMostPopular. Then, the remaining strings are read and
stored into vector aprMostPopular and julMostPopular, respectively. Perform the
following tasks:

If aprMostPopular is equal to julMostPopular, output "July's most popular colors
are the same as April's most popular colors.", followed by a newline. Otherwise:
Output "July's most popular colors are not the same as April's most popular
colors.", followed by a newline. Assign julBackup as a copy of julMostPopular.
*/

int main() {
   int numMostPopular;
   vector<string> aprMostPopular;
   vector<string> julMostPopular;
   vector<string> julBackup;
   unsigned int i;
   string inputVal;

   cin >> numMostPopular;

   cout << "April's most popular colors: ";
   for (i = 0; i < numMostPopular; ++i) {
      cin >> inputVal;
      aprMostPopular.push_back(inputVal);
      cout << aprMostPopular.at(i) << " ";
   }
   cout << endl;

   cout << "July's most popular colors: ";
   for (i = 0; i < numMostPopular; ++i) {
      cin >> inputVal;
      julMostPopular.push_back(inputVal);
      cout << julMostPopular.at(i) << " ";
   }
   cout << endl;

   /* Your code goes here */
   if (aprMostPopular == julMostPopular) {
      cout << "July's most popular colors are the same as April's most popular "
              "colors."
           << endl;
   } else {
      cout << "July's most popular colors are not the same as April's most "
              "popular colors."
           << endl;
      julMostPopular = aprMostPopular
   };

   if (julBackup.size() > 0) {
      cout << "July's backup: ";
      for (i = 0; i < julBackup.size(); ++i) {
         cout << julBackup.at(i) << " ";
      }
      cout << endl;
   } else {
      cout << "Backup not needed." << endl;
   }

   return 0;
}
