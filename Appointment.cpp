// File Appointment.cpp  contains the implementation of class Appointment
#include "Appointment.h"
#include <fstream>
#include <iostream>
using namespace std;

// Nmber of days in each month
static int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30,
                            31, 30, 31};	

// Nmaes of the months
static string conversionTable[] = {"Error", "January", "February", 
    "March", "April", "May", "June", "July", "August", "September",
    "October", "November", "December"};

void Appointment::Initialize
     (int newMonth, int newDay, int newYear, string desc)
// Post: If newMonth, newDay and newYear represent a valid date,
//       year is set to newYear;
//       month is set to newMonth;
//       day is set to newDay;
//       otherwise a string exception is thrown, stating the
//       first incorrect parameter.
{
  if (newMonth < 1 || newMonth > 12)
     throw string("Month is invalid");
  else if (newDay < 1 || newDay > daysInMonth[newMonth])
     throw string("Day is invalid");
  else if (newYear < 1583)
     throw string("Year is invalid");
  year = newYear;
  month = newMonth;
  day = newDay;
  description = desc;
}
int Appointment::GetMonth() const
// Accessor function for data member month.
{
   return month;
}

string Appointment::GetMonthAsString() const
// Returns data member as a string
{
  return conversionTable[month];
}

int Appointment::GetYear() const
// Accessor function for data member year.
{
  return year;
}

int Appointment::GetDay() const
// Accessor function for data member day.
{
  return day;
}

// Compare using year, month and day as key 
RelationType Appointment::ComparedTo(Appointment aAppt) const
// Pre:  Self and aDate have been initialized.
// Post: Function value = LESS, if self comes before aAppt.
//                      = EQUAL, if self is the same as aAppt.
//                      = GREATER, if self comes after aAppt.
{
  if (year < aAppt.year)
    return LESS;
  else if (year > aAppt.year)
    return GREATER;
  else if (month < aAppt.month)
    return LESS;
  else if (month > aAppt.month)
    return GREATER;
  else if (day < aAppt.day)
    return LESS;
  else if (day > aAppt.day)
    return  GREATER;
  else return EQUAL;
}

void Appointment::Input()
{
  cout << "Enter the year" << endl;
  cin >> year;
  cout << "Enter the month" << endl;
  cin >> month;
  cout << "Enter the day" << endl;
  cin >> day;
  cout << "Enter a description" << endl;
  cin >> description;
}

void Appointment::Output()
{
  cout << month << "/" << day << "/" << year << endl;
  cout << "Description: " << description << endl;
}
