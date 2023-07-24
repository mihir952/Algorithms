// using third variable temp
#include <iostream>
using namespace std;

int main() {
int a,b,temp;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
cout<<"Numbers before swapping are:"<<a<<b<<endl;
temp=a;
a=b;
b=temp;
cout<<"Numbers after Swapping are:"<<a<<b<<endl;
    
  return 0;
}

//without temp
#include <iostream>
using namespace std;

int main() {
int a,b;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
cout<<"Numbers before swapping are:"<<a<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"Numbers after Swapping are:"<<a<<b<<endl;
    
  return 0;
}

