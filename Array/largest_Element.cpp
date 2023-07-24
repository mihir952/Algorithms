#include <iostream>
using namespace std;

int main()
{
    int n, i, max;
    int arr[100];
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << "enter the values of array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "The largest element of an Array is:" << max << endl;

    return 0;
}
