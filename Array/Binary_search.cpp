
#include <iostream>
using namespace std;

int Binary_search(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low + high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
             high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
 
}

int main() {
    int arr[]={1,10,14,18,76,98};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index=Binary_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" the element is present at :"<<index<<endl;
    }
    else{
        cout<<key<<" is not found"<<endl;
    }
    return 0;
}