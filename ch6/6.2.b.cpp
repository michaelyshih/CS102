#include <iostream>
#include <vector>
using namespace std;

int main() {
   int member1;
	int member2;
	unsigned int i;

	cin >> member1;
	cin >> member2;

   /* Your code goes here */
   vector<int> memberLogs;
   memberLogs.push_back(member1);
   memberLogs.push_back(member2);

   for (i = 0; i < memberLogs.size(); ++i) {
      cout << memberLogs.at(i) << " ";
   }
   cout << endl;

   return 0;
}
