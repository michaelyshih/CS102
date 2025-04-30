#include "Artwork.h"
#include <iostream>

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

output example:
Artist: Pablo Picasso (1881 to 1973)
Title: Three Musicians, 1921
*/

// TODO: Define default constructor
Artwork::Artwork() {
    title = "unknown";
    yearCreated = -1;
    artist = Artist();
}

// TODO: Define second constructor to initialize
//       private fields (title, yearCreated, artist)
Artwork::Artwork(string title, int yearCreated, Artist artist) {
    this->title = title;
    this->yearCreated = yearCreated;
    this->artist = artist;
}

// TODO: Define get functions: GetTitle(), GetYearCreated()
string Artwork::GetTitle() {
    return title;
}
int Artwork::GetYearCreated() {
    return yearCreated;
}

// TODO: Define PrintInfo() function
//       Call the PrintInfo() function in the Artist class to print an artist's information
void Artwork::PrintInfo() {
    artist.PrintInfo();
      cout << "Title: " << title << ", " << yearCreated << endl;
}
