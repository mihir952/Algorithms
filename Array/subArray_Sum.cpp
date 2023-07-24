#include<iostream>
using namespace std;

int Addsub_array(int arr[],int n){
    int maxsum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }
            if(maxsum<sum){
                maxsum=sum;
            }
        }
      
    }
    return maxsum;
}
int main(){
    int arr[]={1,-2,-3,4,5};
    int n=sizeof(arr)/sizeof(int);
  cout<<Addsub_array(arr,n);
    
    return 0;
    
}