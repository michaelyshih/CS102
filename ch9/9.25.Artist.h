#ifndef ARTISTH
#define ARTISTH

#include <string>
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
*/

class Artist {
  public:
   Artist();

   Artist(string artistName, int birthYear, int deathYear);

   string GetName() const;

   int GetBirthYear() const;

   int GetDeathYear() const;

   void PrintInfo() const;

  private:
   // TODO: Declare private data members - artistName, birthYear, deathYear
   string artistName;
   int birthYear;
   int deathYear;
};

#endif
