// Find the first non-repeating element in the array .
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {12, 45, 45, 67, 67};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(i != j && arr[i] == arr[j]) break;
            if(j == n-1) cout<<arr[i];
        }
    }
}