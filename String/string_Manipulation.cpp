#include<iostream>
using namespace std;
#include<string>


int main(){

//1st Method for initialization

//   string s="Hello World";
//   cout<<s<<endl;


//2nd Method
// string s("hello World ");//Dynamic Array 
// cout<<s <<endl;

//3rd Method
// string s;
// cin>>s; this will not give complete string
// cout<<s<<endl;


// string s;
// getline(cin,s);
// getline(cin,s,',');
// cout<<s<<endl;


string s;
getline(cin,s);
for(char ch:s){
    cout<<ch<<",";
}
cout<<s<<endl;
}