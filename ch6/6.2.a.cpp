#include "codetest.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<double> runningTime;
   double time1;
	double time2;
	double time3;
	double time4;
	double time5;
	unsigned int i;

	cin >> time1;
	cin >> time2;
	cin >> time3;
	cin >> time4;
	cin >> time5;

   /* Your code goes here */
   runningTime.push_back(time5);
   runningTime.push_back(time4);
   runningTime.push_back(time3);
   runningTime.push_back(time2);
   runningTime.push_back(time1);

   for (i = 0; i < runningTime.size(); ++i) {
      cout << runningTime.at(i) << " ";
   }
   cout << endl;

   codetest(); // For code testing only

   return 0;
}
