//Author:Nathaniel Leslie
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string fname = "";
  string lname = "";
  int lucky = 0;
  //get user input
  cout<<"What is your first name?"<<endl;
  cin>>fname;
  cout<<"What is your last name?"<<endl;
  cin>>lname;
  cout<<"Welcome, "<<fname.at(0)<<"."<<lname.at(0)<<"., here is your fortune..."<<endl;
  //tell fortune
  lucky = fname.length(); 
  cout<<"your lucky number is "<<lucky<<endl;
  return 0;
}
