#include <iomanip>
#include <iostream>

#include "Team.h"
using namespace std;

/*
Given main(), define the Team class (in files Team.h and Team.cpp). For class
member function GetWinPercentage(), the formula is: wins / (wins + losses).
Note: Use casting to prevent integer division.

For class member function PrintStanding(), output the win percentage of the team
with two digits after the decimal point and whether the team has a winning or
losing average. A team has a winning average if the win percentage is 0.5 or
greater.

Ex: If the input is Ravens 13 3, where Ravens is the team's name, 13 is the
number of team wins, and 3 is the number of team losses, the output is:

Win percentage: 0.81
Congratulations, Team Ravens has a winning average!
Ex: If the input is Angels 80 82, the output is:

Win percentage: 0.49
Team Angels has a losing average.*/

// TODO: Implement mutator functions -
//       SetName(), SetWins(), SetLosses()
void Team::SetName(string teamName) { name = teamName; }
void Team::SetWins(int teamWins) { wins = teamWins; }
void Team::SetLosses(int teamLosses) { losses = teamLosses; }

// TODO: Implement accessor functions -
//       GetName(), GetWins(), GetLosses()
string Team::GetName() const { return name; }
int Team::GetWins() const { return wins; }
int Team::GetLosses() const { return losses; }

// TODO: Implement GetWinPercentage()
double Team::GetWinPercentage() const {
    return static_cast<double>(wins) / (wins + losses);
}

// TODO: Implement PrintStanding()
void Team::PrintStanding() {
    cout << fixed << setprecision(2);
    cout << "Win percentage: " << GetWinPercentage() << endl;
    if (GetWinPercentage() >= 0.50) {
        cout << "Congratulations, Team " << GetName()
             << " has a winning average!" << endl;
    } else {
        cout << "Team " << GetName() << " has a losing average." << endl;
    }
}
