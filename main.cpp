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
  int index = 0;

  //get user input
  cout<<"What is your first name?"<<endl;
  cin>>fname;
  cout<<"What is your last name?"<<endl;
  cin>>lname;
  cout<<"Welcome, "<<fname.at(0)<<"."<<lname.at(0)<<"., here is your fortune..."<<endl;
  //tell fortune
  lucky = fname.length(); 
  cout<<"your lucky number is "<<lucky<<endl;
  //famous or low profile
  if (fname.at(0) == 'A' || fname.at(0) == 'a' || fname.at(0) == 'E' || fname.at(0) == 'e' || fname.at(0) == 'I' || fname.at(0) == 'i'      || fname.at(0) == 'O' || fname.at(0) == 'o' || fname.at(0) == 'U' || fname.at(0) == 'u')
    {
     cout<<"you are destined to be famous!"<<endl;
    }
  else
    {
     cout<<"you should keep a low profile."<<endl;
    }
  //true love
  index = lname.length(); 
  if(lname.at(index-1)=='A' || lname.at(index-1)=='a' || lname.at(index-1)=='E' || lname.at(index-1)=='e' || lname.at(index-1)== 'I' || lname.at(index-1)=='i' || lname.at(index-1)=='O' || lname.at(index-1)=='o' || lname.at(index-1)=='U' || lname.at(index-1)=='u')
    {
     cout<<"you have already met your true love."<<endl;
    }
  cout<<"have a good day!"<<endl;
  return 0;
}
