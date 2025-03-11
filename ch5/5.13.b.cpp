#include <iostream>
using namespace std;

/*
The function PrintTime() has a string parameter. Define a second PrintTime()
function that has two string parameters. The first parameter is the number of
hours and the second parameter is the number of minutes. The second function
outputs the following in order, all on one line:

"Total "
the value of the first string parameter
" hours and "
the value of the second string parameter
" minutes"
End with a newline.
Ex: If the input is:

four
two
then the output is:

Total four hours
Total four hours and two minutes
*/

void PrintTime(string hours) {
   cout << "Total " << hours << " hours" << endl;
}

/* Your code goes here */
void PrintTime(string hours, string minutes) {
   cout << "Total " << hours << " hours and " << minutes << " minutes" << endl;
}

int main() {
   string hoursUsed;
   string minutesUsed;

   getline(cin, hoursUsed);
   getline(cin, minutesUsed);

   PrintTime(hoursUsed);
   PrintTime(hoursUsed, minutesUsed);

   return 0;
}
