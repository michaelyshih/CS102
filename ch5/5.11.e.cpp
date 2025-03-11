#include <iostream>
#include <vector>
using namespace std;

/*
Define a function MirrorVector() that takes an input integer vector parameter
and an output integer vector parameter passed by reference. The function copies
all the elements in the input vector to the output vector in reversed order.

Ex: If the input is:

4
-7 -1 5 10
then the vector has 4 elements {-7, -1, 5, 10} and the output is:

10
5
-1
-7
*/

/* Your code goes here */
void MirrorVector(const vector<int> inputVector, vector<int>& reversed) {
   for (int i = inputVector.size() - 1; i >= 0; i--) {
      reversed.push_back(inputVector.at(i));
   }
}

int main() {
   int i;
	vector<int> inputVector;
	vector<int> reversed;
	int size;
	int input;

	cin >> size;
	for (i = 0; i < size; ++i) {
		cin >> input;
		inputVector.push_back(input);
	}

   MirrorVector(inputVector, reversed);

	for (i = 0; i < reversed.size(); ++i) {
		cout << reversed.at(i) << endl;
	}

   return 0;
}
