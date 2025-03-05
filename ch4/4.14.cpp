#include <iostream>
using namespace std;

/*As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2
*/


int main() {

   /* Type your code here. */
   int x;

   cin >> x;

   while ( x > 0){
    cout << x % 2;
    x /= 2;

   }

   cout << endl;

   return 0;
}
