#include<iostream>
#include<vector>
using namespace std;


int main(){
   vector<int> arr={1,2,3,4,5,9,87};
   arr.push_back(67);
    // arr.pop_back();
   cout<<arr.size()<<endl; 
   cout<<arr.capacity()<<endl;
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<endl;
  
   }

   //fill constructor
   // vector<int> arr(10,7) 
   // o/p=7,7,7,7,7,7,7,7,7,7
}