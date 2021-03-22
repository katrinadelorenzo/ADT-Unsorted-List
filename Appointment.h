#include <string>
#include <fstream>
using namespace std;


enum RelationType {LESS, EQUAL, GREATER};
// Compares self with someDate.
class Appointment
{
public:
  void Initialize(int newMonth, int newDay, int newYear, string desc);
  int GetMonth() const;							// returns year
  int GetYear() const;							// returns month
  int GetDay() const;							// returns day
  string GetMonthAsString() const;					// returns month as a string
  RelationType ComparedTo(Appointment someAppt) const;
  void Input();
  void Output();
  
  
private:
  int  year;
  int  month;
  int  day;				

  string description; 
};


