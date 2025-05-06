#include <iostream>

#include "Encyclopedia.h"

// Define functions declared in Encyclopedia.h

// Setter functions
void Encyclopedia::SetEdition(string edition) { this->edition = edition; }
void Encyclopedia::SetNumPages(int numPages) { this->numPages = numPages; }

// Getter functions
string Encyclopedia::GetEdition() const { return edition; }
int Encyclopedia::GetNumPages() const { return numPages; }

// PrintInfo function
void Encyclopedia::PrintInfo() {
   Book::PrintInfo();  // Call the base class PrintInfo
   cout << "   Edition: " << edition << endl;
   cout << "   Number of Pages: " << numPages << endl;
}
