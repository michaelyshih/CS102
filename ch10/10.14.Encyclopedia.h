#ifndef ENCYCLOPEDIAH
#define ENCYCLOPEDIAH

#include "Book.h"

class Encyclopedia : public Book {
   // TODO: Declare mutator functions -
   //       SetEdition(), SetNumPages()
  public:
   void SetEdition(string edition);
   void SetNumPages(int numPages);

   // TODO: Declare accessor functions -
   //       GetEdition(), GetNumPages()
   string GetEdition() const;
   int GetNumPages() const;

   // TODO: Declare a PrintInfo() function that overrides
   //       the PrintInfo() in Book class
   void PrintInfo() const;

   // TODO: Declare private data members
  private:
   string edition;
   int numPages;
};

#endif
