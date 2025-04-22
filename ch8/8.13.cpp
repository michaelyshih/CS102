#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

/*
txt files input w/ food items
input -> filename
read line by line from filestream
if a food is found,
   output in format: name (category) -- description
   *written in category, name, description, availablility - seperated by tabs

   Hints: Use the find() function to find the index of a tab character in each
row of the text file. Use the substr() function to extract the text separated by
the tab characters.

food.txt:
Sandwiches    Ham sandwich    Classic ham sandwich    Available
Sandwiches    Chicken salad sandwich  Chicken salad sandwich  Not available
Sandwiches    Cheeseburger    Classic cheeseburger    Not available
Salads    Caesar salad    Chunks of romaine heart lettuce dressed with lemon
juice    Available
Salads    Asian salad   Mixed greens with ginger dressing, sprinkled with sesame
Not available
Beverages    Water   16oz bottled water Available
Beverages   Coca-Cola   16oz Coca-Cola  Not available
Mexican food   Chicken tacos  Grilled chicken breast in freshly made tortillas
Not available
Mexican food   Beef tacos  Ground beef in freshly made tortillas
Available
Vegetarian  Avocado sandwich  Sliced avocado with fruity spread   Not
available

output:
Ham sandwich (Sandwiches) -- Classic ham sandwich
Caesar salad (Salads) -- Chunks of romaine heart lettuce dressed with lemon
juice Water (Beverages) -- 16oz bottled water
Beef tacos (Mexican food) -- Ground beef in freshly made tortillas
*/

/*
method:
- read file name from user
- open file
- while each line into string from filestream
- only output if available
- splice string into vector seperated by tabs
- output in format: name (category) -- description
- close file
*/

vector<string> splitByTab(const string& line) {
   vector<string> result;
   istringstream iss(line);
   string token;

   while (getline(iss, token, '\t')) {
      result.push_back(token);
   }

   return result;
}

int main() {
   /* Type your code here. */
   // Declare any necessary variables here.
   ifstream inputFile;
   string line;
   string fileName;
   string name, category, description, availability;

   // Read a file name from the user and read the tsv file here.
   cin >> fileName;
   inputFile.open(fileName);
   if (inputFile.fail()) {
      cout << "Error opening file." << endl;
      return 1;
   }

   // Read each line from the file
   while (getline(inputFile, line)) {
      // Check if the line contains "Available"
      if (line.find("Available") != string::npos) {
         // Split the line into individual components
         vector<string> components = splitByTab(line);
         category = components[0];
         name = components[1];
         description = components[2];
         availability = components[3];

         // Output in the specified format
         cout << name << " (" << category << ") -- " << description << endl;
      }
   }


   return 0;
}
