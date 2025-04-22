#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
txt file contains: synonyms for words
output: synonyms for a specific word

filename is named by the synonyms to that word
words are sorted in line by alphabetical order seperated by space
task:
- read a word (filname + .txt) + char
- open the file
- find the line beginning with the char
- output all the words synonym beginning with that char seperated per line
- if the file does not exist, output "No synonyms for educate begin with a."
*/

int main() {
   /* Type your code here. */
   // Declare variables
   string filename;
   string word;
   char ch;
   istringstream inSS;
   string line;
   ifstream file;

   // Get the word and character from the user
   cin >> word >> ch;
   filename = word + ".txt";

   // Open the file
   file.open(filename.c_str());

   // Check if the file opened successfully
   if (!file.is_open()) {
      cout << "unable to open file " << filename << endl;
      return 1;
   }

   // Read the file line by line
   while (getline(file, line)) {
      // inSS.clear();
      // Check if the line starts with the character
      if (line[0] == ch) {
         // Output the synonyms
         inSS.str(line);
         while (inSS >> word) {
            cout << word << endl;
         }
         return 1;
      }
   }

   // If no synonyms were found, output a message
   cout << "No synonyms for " << word << " begin with " << ch << "." << endl;

   return 0;
}
