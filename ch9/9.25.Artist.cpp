#include <iostream>
#include <string>

#include "Artist.h"
using namespace std;

/*
complete the Artist class (in files Artist.h and Artist.cpp):
- constructors to initialize an artist's information
- get member functions
- PrintInfo()
The default constructor:
- artist's name to"unknown"
- years of birth
- death to -1.
- PrintInfo() displays "Artist: " + artist's name + " " +
then the birth and death dates in one of three formats:
- (XXXX to YYYY) if both the birth and death years are nonnegative
- (XXXX to YYYY) if both the birth and death years are nonnegative
- (unknown) otherwise

output example:
Artist: Pablo Picasso (1881 to 1973)
Artist: Brice Marden (1938 to present)
Artist: Banksy (unknown)
*/

// TODO: Define default constructor
Artist::Artist() {
   artistName = "unknown";
   birthYear = -1;
   deathYear = -1;
}

// TODO: Define second constructor to initialize
//       private fields (artistName, birthYear, deathYear)
Arist::Arist(string artistName, int birthYear, int deathYear) {
   this->artistName = artistName;
   this->birthYear = birthYear;
   this->deathYear = deathYear;
}
// TODO: Define get functions: GetName(), GetBirthYear(), GetDeathYear()
string Artist::GetName() const { return artistName; }
int Artist::GetBirthYear() const { return birthYear; }
int Artist::GetDeathYear() const { return deathYear; }


// TODO: Define PrintInfo() function
//      If deathYear is entered as -1, only print birthYear
void Artist::PrintInfo() const {
   cout << "Artist: " << artistName << " (";
   if (birthYear >= 0 && deathYear >= 0) {
      cout << birthYear << " to " << deathYear;
   } else if (birthYear >= 0) {
      cout << birthYear << " to present";
   } else {
      cout << "unknown";
   }
   cout << ")" << endl;
}
