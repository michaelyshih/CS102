#include <iostream>
#include <sstream>
#include <string>

/*
Complete main() to read dates from input, one date per line. Each date's format
must be as follows: March 1, 1990. Any date not following that format is
incorrect and should be ignored. Use the substr() function to parse the string
and extract the date. The input ends with -1 on a line alone. Output each
correct date as: 3-1-1990.

Ex: If the input is:

March 1, 1990
April 2 1995
7/15/20
December 13, 2003
-1
then the output is:

3-1-1990
12-13-2003
Use the provided GetMonthAsInt() function to convert a month string to an
integer. If the month string is valid, an integer in the range 1 to 12 inclusive
is returned, otherwise 0 is returned. Ex: GetMonthAsInt("February") returns 2
and GetMonthAsInt("7/15/20") returns 0.
*/

using namespace std;

int GetMonthAsInt(string month) {
   int monthInt = 0;

   if (month == "January")
      monthInt = 1;
   else if (month == "February")
      monthInt = 2;
   else if (month == "March")
      monthInt = 3;
   else if (month == "April")
      monthInt = 4;
   else if (month == "May")
      monthInt = 5;
   else if (month == "June")
      monthInt = 6;
   else if (month == "July")
      monthInt = 7;
   else if (month == "August")
      monthInt = 8;
   else if (month == "September")
      monthInt = 9;
   else if (month == "October")
      monthInt = 10;
   else if (month == "November")
      monthInt = 11;
   else if (month == "December")
      monthInt = 12;
   return monthInt;
}

int main() {
   string lineString;
   int monthInt;
   int dayInt;
   int yearInt;
   int i, j;

   // TODO: Read dates from input, parse the dates to find the ones
   //       in the correct format, and output in m-d-yyyy format


   while (getline(cin, lineString)) {
      if (lineString == "-1") {
         break;
      }
      i = lineString.find(" ");
      if (i == string::npos) {
         continue; // No space found, invalid format
      }
      string month = lineString.substr(0, i);
      j = lineString.find(",");
      if (j == string::npos || j < i) {
         continue; // No comma found or comma before space, invalid format
      }
      string day = lineString.substr(i + 1, j - i - 1);
      string year = lineString.substr(j + 2);

      monthInt = GetMonthAsInt(month);
      dayInt = stoi(day);
      yearInt = stoi(year);

      if (monthInt != 0 && dayInt != 0 && yearInt != 0) {
         cout << monthInt << "-" << dayInt << "-" << yearInt << endl;
      }
   }


}
