#include <iostream>
#include <vector>
using namespace std;

/*
Write a program that reads an integer, a list of words, and a character. The
integer signifies how many words are in the list. The output of the program is
every word in the list that contains the character at least once. For coding
simplicity, follow each output word by a comma, even the last one. Add a newline
to the end of the last output. Assume at least one word in the list will contain
the given character.

Ex: If the input is:

4
hello zoo sleep drizzle
z

then the output is:

zoo,drizzle,
To achieve the above, first read the list into a vector. Keep in mind that the
character 'a' is not equal to the character 'A'.
*/

int main() {
   /* Type your code here. */
   int numWords;
   cin >> numWords;
   vector<string> wordList(numWords);
   string inputWord;
   int i;

   for (i = 0; i < numWords; ++i) {
      cin >> inputWord;
      wordList.push_back(inputWord);
   }

   char searchChar;
   cin >> searchChar;

   for (i = 0; i < wordList.size(); ++i) {
      if (wordList.at(i).find(searchChar) != string::npos) {
         cout << wordList.at(i) << ",";
      }
   }
   cout << endl;


   return 0;
}
