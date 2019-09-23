//Author:Nathaniel Leslie
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string fname = "";
  string lname = "";

  //get user input
  cout<<"Please enter your first name: ";
  cin>>fname;
  cout<<"Please enter your last name: ";
  cin>>lname;
  cout<<"Welcome, "<<fname<<" "<<lname<<", here is your fortune..."<<endl;
  //tell fortune

  return 0;
}
