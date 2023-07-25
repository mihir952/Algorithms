#include<iostream>
#include<vector>
using namespace std;


int main(){
  vector<int> arr={1,3,5,7,9};
  int k=2;
  int n=arr.size();
   k=k%n;
  vector<int> output;
  for(int i=n-k;i<=n-1;i++){
    output.push_back(arr[i]);
  }
  for(int i=0;i<n-k;i++){
    output.push_back(arr[i]);
  }
  for(int i=0;i<n;i++){
    cout<<output[i]<<endl;
  }
  
 
  return 0;
}