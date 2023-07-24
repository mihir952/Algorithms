#include<iostream>
using namespace std;

void sub_array(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            }
              cout<<endl;
        }
      
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    sub_array(arr,n);
    
    
    
    return 0;
    
}