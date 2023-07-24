//without temp
#include <iostream>
using namespace std;

int main() {
 int n,i;
 int arr[100];
 cout<<"Enter the value of n:"<<endl;
 cin>>n;
 cout<<"enter the values of array"<<endl;
 for(i=0;i<n;i++){
 	cin>>arr[i];
    }
cout<<"Reverse Of Array are :"<<endl;
 for(i=arr[n-1];i>=0;i--){
 	cout<<arr[i]<<" ";
    }
    
  return 0;
}


//with swaping
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;

  int arr[n];
  cout << "Enter the values of the array: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Reverse of the array: " << endl;
  for (int i = 0, j = n - 1; i < j; i++, j--) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  cout << "Reversed array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
