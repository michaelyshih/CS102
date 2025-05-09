#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
   // TODO: Declare private data members
  private:
   string courseNumber;
   string courseTitle;

   // TODO: Declare mutator functions
   //       SetCourseNumber(), SetCourseTitle()
  public:
   void SetCourseNumber(string courseNumber);
   void SetCourseTitle(string courseTitle);

   // TODO: Declare accessor functions -
   //       GetCourseNumber(), GetCourseTitle()
   string GetCourseNumber() const;
   string GetCourseTitle() const;

   // TODO: Declare PrintInfo()
   void PrintInfo() const;
};

#endif
