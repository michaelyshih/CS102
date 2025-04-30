#ifndef TEAMH
#define TEAMH

#include <string>

/*
Ex: If the input is Ravens 13 3, where Ravens is the team's name, 13 is the
number of team wins, and 3 is the number of team losses, the output is:

Win percentage: 0.81
Congratulations, Team Ravens has a winning average!
Ex: If the input is Angels 80 82, the output is:

Win percentage: 0.49
Team Angels has a losing average.*/

using namespace std;

class Team {
   // TODO: Declare private data members - name, wins, losses
  private:
   string name;
   int wins;
   int losses;
   // TODO: Declare mutator functions -
   //       SetName(), SetWins(), SetLosses()
  public:
   void SetName(string teamName);
   void SetWins(int teamWins);
   void SetLosses(int teamLosses);

   // TODO: Declare accessor functions -
   //       GetName(), GetWins(), GetLosses()
  public:
   string GetName() const;
   int GetWins() const;
   int GetLosses() const;

   // TODO: Declare GetWinPercentage()
   double GetWinPercentage() const;
   // TODO: Declare PrintStanding()
   void PrintStanding();
};

#endif
