#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
Define a function named GetWordFrequency that takes a vector of strings and a
search word as parameters. Function GetWordFrequency() then returns the number
of occurrences of the search word in the vector parameter (case insensitive).

Then, write a main program that reads a list of words into a vector, calls
function GetWordFrequency() repeatedly, and outputs the words in the vector with
their frequencies. The input begins with an integer indicating the number of
words that follow.

Ex: If the input is:

5 hey Hi Mark hi mark
the output is:

hey 1
Hi 2
Mark 2
hi 2
mark 2
Hint: Use tolower() to set the first letter of each word to lowercase before
comparing.

The program must define and use the following function:
int GetWordFrequency(vector<string> wordsList, string currWord)
*/

/* Define your function here */
int GetWordFrequency(vector<string> wordsList, string currWord) {
   int count = 0;
   string wordInList;
   currWord.at(0) = tolower(currWord.at(0));

   for (int i = 0; i < wordsList.size(); i++) {
    wordsList.at(i).at(0) = tolower(wordsList.at(i).at(0));
    // cout << wordsList.at(i) << " " << currWord << endl;
      if ( wordsList.at(i) == currWord) {
         count++;
      }
   }
   return count;
}

int main() {
   /* Type your code here */
   int numWords;
   string input;
   vector<string> wordsList;

   cin >> numWords;

   for (int i = 0; i < numWords; i++) {
      cin >> input;
      wordsList.push_back(input);
   }

   for (int i = 0; i < wordsList.size(); i++) {
      cout << wordsList.at(i) << " ";
      cout << GetWordFrequency(wordsList, wordsList.at(i))<< endl;
   }

   return 0;
}

