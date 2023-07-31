#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}



int main(){
  int arr[]={-2,3,4,-1,5,-12,6,1,3};
  int n=sizeof(arr)/sizeof(int);
  bubble_sort(arr,n);
  for(auto x:arr){
    cout<<x <<",";
  }
 
  return 0;
}