#include <iostream>
#include <vector>
using namespace std;

/*
Four elements are read into origList and four elements are read into
offsetAmount. Add each element in origList with the corresponding value in
offsetAmount. Print each sum followed by a space.

Ex: If the input is:

40 50 60 70 5 7 3 0
then origList = {40, 50, 60, 70} and offsetAmount = {5, 7, 3, 0}. So, the output
is: 45 57 63 70
*/

int main() {
   const int NUM_VALS = 4;
   vector<int> origList;
   vector<int> offsetAmount;
   unsigned int i;
   int input;

   for (i = 0; i < NUM_VALS; ++i) {
      cin >> input;
      origList.push_back(input);
   }

   for (i = 0; i < NUM_VALS; ++i) {
      cin >> input;
      offsetAmount.push_back(input);
   }

   /* Your solution goes here  */
   for (i = 0; i < NUM_VALS; ++i) {
      cout << origList.at(i) + offsetAmount.at(i) << " ";
   }

   cout << endl;

   return 0;
}
