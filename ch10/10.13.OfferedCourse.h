#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
   // TODO: Declare private data members
  private:
   string instructorName;
   string location;
   string classTime;

   // TODO: Declare mutator functions -
   //      SetInstructorName(), SetLocation(), SetClassTime()
  public:
   void SetInstructorName(string instructorName);
   void SetLocation(string location);
   void SetClassTime(string classTime);

   // TODO: Declare accessor functions -
   //      GetInstructorName(), GetLocation(), GetClassTime()
   string GetInstructorName() const;
   string GetLocation() const;
   string GetClassTime() const;
};

#endif
