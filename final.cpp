#include <iostream>
using namespace std;

double modifyValue(double value) {
   value = value * 2.0;
   return value;
}

double modifyResult(double result) {
   result = result / 3.0;
   if (result < 10)
      return result;
   else
      return modifyValue(result);
}
int main() {
   double value, result;
   value = 42;
   result = modifyValue(value);
   cout << value << " " << result << endl;  // Position A
   result = 36;
   value = modifyResult(result);
   cout << value << " " << result << endl;  // Position B
   return 0;
}
