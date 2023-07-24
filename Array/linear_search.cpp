
#include <iostream>
using namespace std;

int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[]={10,2,3,5,19,76,56};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index=linear_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" the element is present at :"<<index<<endl;
    }
    else{
        cout<<key<<" is not found"<<endl;
    }
    return 0;
}