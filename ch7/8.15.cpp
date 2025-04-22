#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*
read movie data from a file, output into fomratted table
- read the file name from the user
- read the line for showtime, title, rating for movie
- title | rating | showtimes
- title align left with limit to 44 char
- ratings align right with limit width of 5 char
- showtimes align left separated by a space
- shometimes are sorted by time and title

ex:
16:40,Wonders of the World,G
20:00,Wonders of the World,G
19:00,Journey to Space ,PG-13

output:
Wonders of the World                         |     G | 16:40 20:00
Journey to Space                             | PG-13 | 19:00
*/

/*
method:
- read the file name from the user
- open the file
- loop while getline from the file
- if title is same as prev add time to end of output string stream
- if title is different, end line in output string stream and add new title and
rating
- add one last endl
- output the string stream to the console
*/

vector<string> splitByComma(const string& line) {
   vector<string> result;
   istringstream iss(line);
   string token;

   while (getline(iss, token, ',')) {
      result.push_back(token);
   }

   return result;
}

int main() {
   /* Type your code here. */
   // Declare Variables
   string fileName;
   string line, title, rating, showtime;
   ostringstream output;
   ifstream file;
   vector<string> movieDetails;
   string prevTitle = "";

   // Get the file name from the user
   cin >> fileName;

   // Open the file
   file.open(fileName);

   // Check if the file opened successfully
   if (!file.is_open()) {
      cerr << "Error opening file: " << fileName << endl;
      return 1;
   }

   // Read the file line by line
   while (getline(file, line)) {
      // Split the line into title, rating, and showtime
      movieDetails = splitByComma(line);
      showtime = movieDetails[0];
      title = movieDetails[1];
      rating = movieDetails[2];

      // Check if the title is the same as the previous one
      if (title == prevTitle) {
         // Append the showtime to the existing line
         output << " " << showtime;
      } else {
         // If it's a new title, output the previous line and start a new one
         if (!prevTitle.empty()) {
            output << endl;
         }
         // Format the title, rating, and showtime
         output << left << setw(44) << title.substr(0, 44) << " | " << right
                << setw(5) << rating << " | " << left << showtime;
      }
      // Update the previous title
      prevTitle = title;
   }
   // Output the last line
   output << endl;
   cout << output.str();
   // Close the file
   file.close();

   return 0;
}
