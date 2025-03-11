#include <iostream>
using namespace std;

int main() {
   char letterValue;

   /* Your code goes here */
   char& letterRef = letterValue;

   cin >> letterValue;

   cout << "Referenced letter is " << letterRef << "." << endl;

   return 0;
}
