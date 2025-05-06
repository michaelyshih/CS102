#include <iostream>
#include <string>
#include <vector>

#include "Flower.h"
#include "Plant.h"

using namespace std;

// TODO: Define a PrintVector function that prints a vector of plant (or flower)
// object pointers
void PrintVector(const vector<Plant*>& myGarden) {
   for (size_t i = 0; i < myGarden.size(); ++i) {
      cout << "Plant " << i + 1 << " Information:" << endl;
      myGarden.at(i)->PrintInfo();
      cout << endl;
   }
}

int main() {
   // TODO: Declare a vector called myGarden that can hold object of type plant
   // pointer
   vector<Plant*> myGarden;

   // TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
   //       colorOfFlowers, isAnnual
   string plantName, flowerName, isAnnualstr, colorOfFlowers;
   double plantCost, flowerCost;
   bool isAnnual;
   string input;

   cin >> input;

   while (input != "-1") {
      // TODO: Check if input is a plant or flower
      //       Store as a plant object or flower object
      //       Add to the vector myGarden
      if (input == "plant") {
         cin >> plantName >> plantCost;
         Plant* p = new Plant();
         p->SetPlantName(plantName);
         p->SetPlantCost(plantCost);
         myGarden.push_back(p);
      } else if (input == "flower") {
         cin >> flowerName >> flowerCost >> isAnnualstr;
         isAnnual = (isAnnualstr == "true");
         cin >> colorOfFlowers;
         Flower* f = new Flower();
         f->SetPlantName(flowerName);
         f->SetPlantCost(flowerCost);
         f->SetPlantType(isAnnual);
         f->SetColorOfFlowers(colorOfFlowers);
         myGarden.push_back(f);
      }

      cin >> input;
   }

   // TODO: Call the method PrintVector to print myGarden
   PrintVector(myGarden);

   for (size_t i = 0; i < myGarden.size(); ++i) {
      delete myGarden.at(i);
   }

   return 0;
}
