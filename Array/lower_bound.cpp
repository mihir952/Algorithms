#include<iostream>
#include<vector>
using namespace std;


int main(){
  vector<int> arr={-1,-1,2,4,3,5};
  int start=0;
  int end=arr.size()-1;
  int ans=0;
  int val=4;
  while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]<=val){
        ans=arr[mid];
        start=mid+1;
    }
    else{
        end=mid-1;
    }

  }
  cout<<"the lower bound of this array is: "<<ans<<endl;
 
  return 0;
}