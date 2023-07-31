#include<iostream>
using namespace std;


int main(){
   char word;
   char temp=cin.get();
   int len=1;
   while(temp!='\n'){
    len++;
    cout<<temp;
    temp=cin.get();
   }
   cout<<"length is "<<len;
}