#include <cstring>
#include <iostream>
using namespace std;

/*
Variable patientName is assigned with a string read from input. For each
character in patientName, output each character followed by an equal sign
character ('='). the condition should check ofr null terminator '\0' to stop the
loop.

Ex: If the input is Astrid, then the output is:

A=s=t=r=i=d=
*/

int main() {
   char patientName[25];
   int i;

   cin >> patientName;

   /* Your code goes here */
   for (i = 0; patientName[i] != '\0'; i++) {
      cout << patientName[i] << '=';
   }

   cout << endl;

   return 0;
}
