#include <iostream>
using namespace std;

int main() {
 int n,i,sum=0;
 int arr[100];
 cout<<"Enter the value of n:"<<endl;
 cin>>n;
 cout<<"enter the values of array"<<endl;
 for(i=0;i<n;i++){
 	cin>>arr[i];
    }
 for(i=0;i<n;i++){
 	sum=sum+arr[i];
    }
    cout<<"Sum of all array is :"<<sum<<endl;
  return 0;
}
