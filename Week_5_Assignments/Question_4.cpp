// Given an array, predict if the array contains duplicates or not.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bool flag = false;
    for(int i = 0; i < n;i++)
    {
        for(int j = i+1; j <= n;j++)
        {
            if(arr[i] == arr[j]) flag = true;
        }
    }
    if(flag == true) cout<<"The array contains duplicated elements.";
    else cout<<"The array doesn't contains duplicated elements.";

}