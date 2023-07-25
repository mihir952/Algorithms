#include<iostream>
using namespace std;
int max_sumArray(int arr[],int n){
    int sum=0;
    int largestsum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        largestsum=max(largestsum,sum);
    }
    return largestsum;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<max_sumArray(arr,n)<<endl;
}

//time complexity of this algorithm is O(n)



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};