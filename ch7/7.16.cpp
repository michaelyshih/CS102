#include <fstream>
#include <iostream>

#include "Book.h"
#include "BookNode.h"
#include "LinkedListLibrary.h"
#include "VectorLibrary.h"
using namespace std;

/*
Two sorted lists have been created, one implemented using a linked list
(LinkedListLibrary class) and the other implemented using the built-in Vector
class (VectorLibrary class). Each list contains 100 books (title, ISBN number,
author), sorted in ascending order by ISBN number.

Complete main() by inserting a new book into each list using the respective
LinkedListLibrary and VectorLibrary InsertSorted() functions and outputting the
number of book copy operations the computer must perform to insert the new book.
Each InsertSorted() returns the number of book copy operations the computer
performs.

Ex: If the input is:

Their Eyes Were Watching God
9780060838676
Zora Neale Hurston
the output is:

Number of linked list book copy operations: 1
Number of vector book copy operations: 95
Which list do you think will require the most operations? Why?
*/

void FillLibraries(LinkedListLibrary& linkedListLibrary,
                   VectorLibrary& vectorLibrary) {
   ifstream inputFS;  // File input stream
   int linkedListOperations = 0;
   int vectorOperations = 0;

   BookNode* currNode;
   Book tempBook;

   string bookTitle;
   string bookAuthor;
   long long bookISBN;

   // Try to open file
   inputFS.open("books.txt");

   while (getline(inputFS, bookTitle)) {
      inputFS >> bookISBN;
      inputFS.ignore(1, '\n');
      getline(inputFS, bookAuthor);

      // Insert into linked list and accumulate operation counts
      currNode = new BookNode(bookTitle, bookAuthor, bookISBN);
      linkedListOperations += linkedListLibrary.InsertSorted(currNode);

      // Insert into vector and accumulate operation counts
      tempBook = Book(bookTitle, bookAuthor, bookISBN);
      vectorOperations += vectorLibrary.InsertSorted(tempBook);
   }

   inputFS.close();  // close() may throw ios_base::failure if fails
}

int main() {
   int linkedListOperations = 0;
   int vectorOperations = 0;

   // Create libraries
   LinkedListLibrary linkedListLibrary = LinkedListLibrary();
   VectorLibrary vectorLibrary;

   // Fill libraries with 100 books
   FillLibraries(linkedListLibrary, vectorLibrary);

   // Create new book to insert into libraries
   BookNode* currNode;
   Book tempBook;

   string bookTitle;
   string bookAuthor;
   long long bookISBN;

   getline(cin, bookTitle);
   cin >> bookISBN;
   cin.ignore();
   getline(cin, bookAuthor);

   // Insert into linked list
   // No need to delete currNode, deleted by LinkedListLibrary destructor
   currNode = new BookNode(bookTitle, bookAuthor, bookISBN);
   // TODO: Call LL_Library's InsertSorted() method to insert currNode and
   // return
   //       the number of operations performed
   linkedListOperations = linkedListLibrary.InsertSorted(currNode);


   // Insert into VectorList
   tempBook = Book(bookTitle, bookAuthor, bookISBN);
   // TODO: Call VectorLibrary's InsertSorted() method to insert tempBook and
   // return
   //       the number of operations performed
   vectorOperations = vectorLibrary.InsertSorted(tempBook);

   // TODO: Print number of operations for linked list
   cout << "Number of linked list book copy operations: "
        << linkedListOperations << endl;

   // TODO: Print number of operations for vector
   cout << "Number of vector book copy operations: " << vectorOperations
        << endl;
}
