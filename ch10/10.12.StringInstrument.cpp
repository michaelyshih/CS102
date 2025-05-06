#include "StringInstrument.h"

// TODO: Define mutator functions -
//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()
void StringInstrument::SetNumOfStrings(int numStrings) {
   this->numStrings = numStrings;
}
void StringInstrument::SetNumOfFrets(int numFrets) {
   this->numFrets = numFrets;
}
void StringInstrument::SetIsBowed(bool isBowed) {
   this->isBowed = isBowed;
}


// TODO: Define accessor functions -
//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()
int StringInstrument::GetNumOfStrings() const {
         return numStrings;
}
int StringInstrument::GetNumOfFrets() const {
         return numFrets;
}
bool StringInstrument::GetIsBowed() const {
         return isBowed;
}
