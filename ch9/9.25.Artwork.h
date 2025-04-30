#ifndef ARTWORKH
#define ARTWORKH

#include "Artist.h"

/*
Complete the Artwork class:
- Declare a private field with type Artist.
constructors :
- artwork's information
- get member functions
- PrintInfo()
The default constructor:
- the title to "unknown",
- the year created to -1.
- PrintInfo()
PrintInfo() displays an artist's information by:
- calling the PrintInfo() function in the Artist class,
- followed by the artwork's title and the year created.
*/

class Artwork {
  public:
   Artwork();

   Artwork(string title, int yearCreated, Artist artist);

   string GetTitle();

   int GetYearCreated();

   void PrintInfo();

  private:
   // TODO: Declare private data members - title, yearCreated
   string title;
   int yearCreated;

   // TODO: Declare private data member artist of type Artist
   Artist artist;
};

#endif
