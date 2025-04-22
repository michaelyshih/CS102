#include <cstring>
#include <fstream>
#include <iostream>

/*
A photographer is organizing a photo collection about the national parks in the
US and would like to annotate the information about each of the photos into a
separate set of files. Write a program that reads the name of a text file
containing a list of photo file names. The program then reads the photo file
names from the text file, replaces the "_photo.jpg" portion of the file names
with "_info.txt", and outputs the modified file names.

Assume the unchanged portion of the photo file names contains only letters and
numbers, and the text file stores one photo file name per line. If the text file
is empty, the program produces no output.

Ex: If the input of the program is:

ParkPhotos.txt*/

/*
(have not talked about how to delete lines from file) so final output will be to
cout
if it's save to assume clean data, cut off last 10 characters from each line
if it's not safe to assume clean data, use string::find() to find "_photo.jpg"
read each line from file stream replace "_photo.jpg" with "_info.txt"
append to output queue
*/

// Include any necessary libraries here.
#include <string>

using namespace std;

int main() {
   /* Type your code here. */
   ifstream inputFile;
   const int SUFFIX_SIZE = 10;
   string line;
   string fileName;

   cin >> fileName;

   inputFile.open(fileName);
   if (inputFile.fail()) {
      cout << "Error opening file." << endl;
      return 1;
   }
   while (getline(inputFile, line)) {
      // Check if the line contains "_photo.jpg"
      // Replace "_photo.jpg" with "_info.txt"
      line.replace(line.size() - SUFFIX_SIZE, SUFFIX_SIZE, "_info.txt");
      cout << line << endl;
   }

   return 0;
}
