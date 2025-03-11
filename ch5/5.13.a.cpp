#include <iostream>
#include <iomanip>
using namespace std;
/*
The function PrintPineappleWeight() has a double parameter. Define a second
PrintPineappleWeight() function that has an integer parameter. The second
function outputs the following in order, all on one line:

"Pineapple weight as a whole number: "
the value of the integer parameter
" ounces"
End with a newline.
Ex: If the input is 14.50 14, then the output is:

Pineapple weight to two decimal places: 14.50 ounces
Pineapple weight as a whole number: 14 ounces
*/

void PrintPineappleWeight(double pineappleWeight) {
   cout << fixed << setprecision(2) << "Pineapple weight to two decimal places: ";
	cout << pineappleWeight << " ounces" << endl;
}

/* Your code goes here */
void PrintPineappleWeight(int pineappleWeight) {
   cout << "Pineapple weight as a whole number: " << pineappleWeight << " ounces" << endl;
}

int main() {
   double pineappleWeight1;
   int pineappleWeight2;

   cin >> pineappleWeight1;
   cin >> pineappleWeight2;

   PrintPineappleWeight(pineappleWeight1);
   PrintPineappleWeight(pineappleWeight2);

   return 0;
}
