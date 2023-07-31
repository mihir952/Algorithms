#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    string a="test";
    string b="tset";
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b){
        cout<<"yes"<<endl;
    }
    else{

    cout<<"No"<<endl;
    }
    cout<<a<<endl;
    cout<<b<<endl;
}


