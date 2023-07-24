//calculate length of string
#include <iostream>
#include<cstring>
using namespace std;

int main() {
  char name[100];
  cout<<"Enter the Char Name:"<<endl;
  cin>>name;
  cout<<"Your Entered Name is "<<name<<endl;
  int len=strlen(name);
  cout<<"The length of string is"<<len<<endl;
  return 0;
}




//to compare two string either they are equal or not
#include <iostream>
#include<cstring>
using namespace std;

int main() {
  char name[100];
  char lname[100];
  cout<<"Enter the Char Name:"<<endl;
  cin>>name>>lname;
  cout<<"Your Entered Name is "<<name<<" "<<lname<<endl;
  int len=strlen(name);
  cout<<"The length of string is"<<len<<endl;
  if(strcmp(name,lname)==0){
      cout<<"Both strings are equal"<<endl;
  }
  else{
      cout<<"Not equal"<<endl;
  }
  return 0;
}

