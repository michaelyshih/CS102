#include <iostream>
using namespace std;
/*
Define a function AdjustGrade() that takes two parameters:

total: an integer, passed by value, for the student's score.
grade: a char, passed by reference, for the student's letter grade.
AdjustGrade() changes grade to D if the total is greater than or equal to 58 and
less than 70, and grade is not D. Otherwise, grade is not changed. The function
returns true if grade has changed, and returns false otherwise.
Ex: If input is
58 F, then output is:

Grade is D after curving.
*/

/* Your code goes here */
bool AdjustGrade(int total, char& grade) {
   if (total >= 58 && total < 70 && grade != 'D') {
      grade = 'D';
      return true;
   }
   return false;
}


int main() {
   int studentPoints;
   char studentGrade;
   bool isChanged;

   cin >> studentPoints;
   cin >> studentGrade;

   isChanged = AdjustGrade(studentPoints, studentGrade);

   if (isChanged) {
      cout << "Grade is " << studentGrade << " after curving." << endl;
   } else {
      cout << "Grade " << studentGrade << " is not changed." << endl;
   }

   return 0;
}
