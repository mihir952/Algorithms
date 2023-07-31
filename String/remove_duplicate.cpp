#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
   int n=s.length();
   string output;
  sort(s.begin(),s.end());
  for(int i=0;i<n;i++){
  while(i<n-1 and s[i]==s[i+1]){
     i++;
  }
  output=output+s[i];
  }
  return output;
    
}

string s = "geeksforgeeks";
output:"efgkors";