#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Write a program that reads a list of words. Then, the program outputs those
words and their frequencies. The input begins with an integer indicating the
number of words that follow. Assume that the list will always contain fewer than
20 words.

Ex: If the input is:

5 hey hi Mark hi mark
the output is:

hey - 1
hi - 2
Mark - 1
hi - 2
mark - 1
Hint: Use two vectors, one vector for the strings and one vector for the
frequencies.

Problem shoudld not use hash but with two vectors
potentially with a nested loop

brute force

1st iterate through: grab word
2nd iterate through: use wordList to loop through wordlist for count

*/

int main() {
   /* Type your code here. */
   int numWords;
   vector<string> wordList;
   vector<int> frequencyList(numWords);
   string inputWord;
   int i, j;

   cin >> numWords;

   for (i = 0; i < numWords; ++i) {
      cin >> inputWord;
      wordList.push_back(inputWord);
   }

   for (i = 0; i < wordList.size(); ++i) {
      frequencyList.push_back(0);
      for (int j = 0; j < wordList.size(); ++j) {
         if (wordList.at(i) == wordList.at(j)) {
            frequencyList.at(i)++;
         }
      }
   }

   for (i = 0; i < wordList.size(); ++i) {
      cout << wordList.at(i) << " - " << frequencyList.at(i) << endl;
   }
   cout << endl;

   return 0;
}
