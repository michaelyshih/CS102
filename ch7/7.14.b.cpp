#include <iostream>
#include <memory>
using namespace std;

/*
A Dog object has data members age and weight, representing the age and the
weight values of a dog. Perform the following tasks:

Write a statement that declares variable dogWrapper as a unique_ptr of type Dog.
Then, in the same statement, initialize dogWrapper with a dynamically allocated
Dog object returned by new Dog(ageValue, weightValue). Click here for example
Ex: If the input is 9 68, then the output is:

Dog's age: 9
Dog's weight: 68
Destructor called on Dog (9, 68)
*/

class Dog {
  public:
   Dog(int ageValue, int weightValue);
   ~Dog();
   void Print();

  private:
   int age;
   int weight;
};

Dog::Dog(int ageValue, int weightValue) {
   age = ageValue;
   weight = weightValue;
}

Dog::~Dog() {
   cout << "Destructor called on Dog (" << age << ", " << weight << ")" << endl;
}

void Dog::Print() {
   cout << "Dog's age: " << age << endl;
   cout << "Dog's weight: " << weight << endl;
}

void RunDog(int ageValue, int weightValue) {
   /* Your code goes here */
   unique_ptr<Dog> dogWrapper(new Dog(ageValue, weightValue));
   
   dogWrapper->Print();
}

int main() {
   int ageSrc;
   int weightSrc;

   cin >> ageSrc;
   cin >> weightSrc;

   RunDog(ageSrc, weightSrc);

   return 0;
}
