#pragma GCC diagnostic push
#pragma GCC diagnostic error \
    "-Wwrite-strings"  // Ensures that the intended style of solution is used
#include <iostream>
using namespace std;

/*
Declare and initialize a C string called drinkName with the value "smoothies".
*/

int main() {
   char drinkName[] = "smoothies";  // C string declaration and initialization

   cout << "Ari likes to drink " << drinkName << "." << endl;

   return 0;
}
#pragma GCC diagnostic pop
