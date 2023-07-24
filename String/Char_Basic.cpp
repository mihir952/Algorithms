#include <iostream>
using namespace std;

int main() {
  char name[100];
  cout<<"Enter the Char Name:"<<endl;
  cin>>name;
  cout<<"Your Entered Name is "<<name<<endl;
//   name[1]='\0';  it will terminate  the array after index 0;
  cout<<name<<endl;
  name[4]='M';
  cout<<name<<endl;
  return 0;
}