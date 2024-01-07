// Find the minimum value out of all elements in the array.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    // Input

    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }

    int small = arr[0];
    for(int i = 0;i < n;i++)
    {
        if(small > arr[i]) small = arr[i];
    }
    cout<<"Smallest element of array is: "<<small;
}