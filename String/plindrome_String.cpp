#include<iostream>
using namespace std;


int main(){
    string str1="abcdcba";
 int len=str1.length();
   for(int i=0;i<len;i++){
       if(str1[i]!=str1[len-i-1]){
          cout<<"fasle";
       }
   }
   cout<<"true";
return 0;
}