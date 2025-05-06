#include "Course.h"

// TODO: Define mutator functions -
//       SetCourseNumber(), SetCourseTitle()
void Course::SetCourseNumber(string courseNumber) {
   this->courseNumber = courseNumber;
}
void Course::SetCourseTitle(string courseTitle) {
   this->courseTitle = courseTitle;
}

// TODO: Define accessor functions -
//       GetCourseNumber(), GetCourseTitle()
string Course::GetCourseNumber() const { return courseNumber; }
string Course::GetCourseTitle() const { return courseTitle; }

// TODO: Define PrintInfo()
void Course::PrintInfo() const {
   cout << "Course Information:" << endl;
   cout << "   Course Number: " << courseNumber << endl;
   cout << "   Course Title: " << courseTitle << endl;
}
