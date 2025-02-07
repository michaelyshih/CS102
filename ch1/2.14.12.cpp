#include <iostream>
using namespace std;

int main()
{
  char letterToQuit;
  int numPresses;

  cin >> letterToQuit;
  cin >> numPresses;

  // Press the q key 2 times to quit.
  /* Your solution goes here  */
  cout << "Press the " << letterToQuit << " key ";
  cout << numPresses << " times to quit." << endl;

  return 0;
}
