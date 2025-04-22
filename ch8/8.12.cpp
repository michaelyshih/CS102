#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Each row of the tsv file contains the Last Name, First Name,
Midterm1 score, Midterm2 score, and the Final score of a student. A sample of
the student information is provided in StudentInfo.tsv. Assume the number of
students is at least 1 and at most 20. Assume also the last names and first
names do not contain whitespaces.

The program performs the following tasks:

- Read the file name of the tsv file from the user.
- Open the tsv file and read the student information.
- Compute the average exam score of each student.
- Assign a letter grade to each student based on the average exam score in the
   following scale:
  - A: 90 =< x
  - B: 80 =< x < 90
  - C: 70 =< x < 80
  - D: 60 =< x < 70
  - F: x < 60
- Compute the average of each exam.
- Output the last names, first names, exam scores, and letter grades of the
students into a text file named report.txt.
  - Output one student per row and separate the values with a tab character.
- Output the average of each exam, with two digits after the decimal point, at
the end of report.txt. Hint: Use the setprecision manipulator to format the
output.

Ex: If the input of the program is:
StudentInfo.tsvand the contents of StudentInfo.tsv are:

Barrett    Edan    70  45  59
Bradshaw    Reagan  96  97  88
Charlton    Caius   73  94  80
Mayo    Tyrese  88  61  36
Stern    Brenda  90  86  45

the file report.txt should contain:

Barrett    Edan    70  45  59  F
Bradshaw    Reagan  96  97  88  A
Charlton    Caius   73  94  80  B
Mayo    Tyrese  88  61  36  D
Stern    Brenda  90  86  45  C

Averages: midterm1 83.40, midterm2 76.60, final 61.60*/

/*
Method:
- while each line into string from filestream
- count number of scores
- suffix string start with first score
- split string into vector of scores
- string into int
- get average of each exam for each student
- assign letter grade based on average
- add current scores to running sum
- assign letter grade and append to end of line
- append to output vector
- add line break
- append average of each exam to output vector


*/
// Determine letter grade
void determineLetterGrade(double average, char& letterGrade) {
   if (average >= 90) {
      letterGrade = 'A';
   } else if (average >= 80) {
      letterGrade = 'B';
   } else if (average >= 70) {
      letterGrade = 'C';
   } else if (average >= 60) {
      letterGrade = 'D';
   } else {
      letterGrade = 'F';
   }
}

int main() {
   /* TODO: Declare any necessary variables here. */
   ifstream inputFile;
   ofstream outputFile;
   string fileName;
   string line;
   vector<string> reportScores;
   double studentAverage;
   char letterGrade;
   double midterm1Sum = 0, midterm2Sum = 0, finalExamSum = 0;
   double midterm1Average, midterm2Average, finalExamAverage;
   double midterm1, midterm2, finalExam;
   /* TODO: Read a file name from the user and read the tsv file here. */
   cin >> fileName;
   inputFile.open(fileName);
   if (inputFile.fail()) {
      cout << "Error opening file." << endl;
      return 1;
   }
   /* TODO: Compute student grades and exam averages, then output results to a
    * text file here. */
   while (getline(inputFile, line)) {
      // Split the line into individual scores
      stringstream ss(line);
      string lastName, firstName;
      ss >> lastName >> firstName >> midterm1 >> midterm2 >> finalExam;

      // Calculate average score
      studentAverage = (midterm1 + midterm2 + finalExam) / 3.0;

      // Determine letter grade
      determineLetterGrade(studentAverage, letterGrade);

      // Update running sums
      midterm1Sum += midterm1;
      midterm2Sum += midterm2;
      finalExamSum += finalExam;

      // Append to reportScores vector
      reportScores.push_back(line + "\t" + letterGrade);
   }

   // Close the input file
   inputFile.close();

   // Calculate averages
   int numStudents = reportScores.size();
   midterm1Average = midterm1Sum / numStudents;
   midterm2Average = midterm2Sum / numStudents;
   finalExamAverage = finalExamSum / numStudents;
   
   // Open the output file
   outputFile.open("report.txt");
   if (outputFile.fail()) {
      cout << "Error opening output file." << endl;
      return 1;
   }
   // Write the report to the output file
   for (const string& report : reportScores) {
      outputFile << report << endl;
   }

   // Format the averages to two decimal places
   outputFile << fixed << setprecision(2);
   outputFile << endl;
   outputFile << "Averages: midterm1 " << midterm1Average << ", midterm2 "
              << midterm2Average << ", final " << finalExamAverage << endl;

   // Close the output file
   outputFile.close();

   return 0;
}
