/* 
  In this Lab I implemented unsorted.h and unsorted.cpp to use as a list for my program that manages appointments.
  Author: Katrina DeLorenzo
  Last Modified: 1 October 2019
  Known bug: None
*/
// Test driver
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>

#include "unsorted.h"

using namespace std;
/* Function to print list */
/*
   @param outFile, list: overload ostream operator and unsortedtype list of appointments
   @pre-condition: list is an assigned value
   @post-condition: list is output
*/
void PrintList(ostream& outFile, UnsortedType& list);

//Main function
int main()
{

  string command;        // operation to be executed
  Appointment appt;      // appointment type for appointment date
  UnsortedType list;     // unsorted type for list of appointments
  bool found;            // boolean value for finding item in list
  int numCommands;       // counter for commands in loop

  cout <<"Enter Command: PutItem, DeleteItem, GetItem, GetLength, MakeEmpty, PrintList, Quit:\n";
  cin >> command;

  numCommands = 0;
  while (command != "Quit")
  { 
    if (command == "PutItem")
    {
      appt.Input();
      list.PutItem(appt);
      appt.Output();
       cout << " is in list" << endl;
    }
    else if (command == "DeleteItem")
    {
      appt.Input();
      list.DeleteItem(appt);
      appt.Output();
      cout << " is deleted" << endl;
    }
    else if (command == "GetItem")
    {
      appt.Input();
      appt = list.GetItem(appt, found);
      appt.Output();
      if (found)
        cout << " found in list." << endl;
      else cout <<  " not in list."  << endl;  
    } 
    else if (command == "GetLength")  
      cout << "Length is " << list.GetLength() << endl;
    else if (command == "IsFull")
      if (list.IsFull())
        cout << "List is full." << endl;
      else 
	      cout << "List is not full."  << endl;  
    else if (command == "MakeEmpty")
    list.MakeEmpty();
	else if (command == "PrintList")
	  PrintList(cout, list);
	else
	  cout << command << " is not a valid command." << endl;
	numCommands++;
    cout <<  " Command number " << numCommands << " completed." 
         << endl;
    cin >> command;
  };
 
  return 0;
}


void PrintList(ostream& dataFile, UnsortedType& list)
// Pre:  list has been initialized.      
//       dataFile is open for writing.   
// Post: Each component in list has been written to dataFile.
//       dataFile is still open.         
{
  int length;
  ItemType item;

  list.ResetList();
  length = list.GetLength();
  for (int counter = 1; counter <= length; counter++)
  {
    item = list.GetNextItem();
    item.Output();
    dataFile<<endl;
  }
  dataFile << endl;
}
