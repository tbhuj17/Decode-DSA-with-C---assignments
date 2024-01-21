// Given an integer array nums of length n where all the integers of nums are in the range [1,
// n] and each integer appears once or twice, return an array of all the integers that appears
// twice.
// You must write an algorithm that runs in O(n) time and uses only constant extra space.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4,3,2,7,8,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i < n;i++)
    {
        
        while(arr[i] != arr[arr[i]-1]) swap(arr[i], arr[arr[i]-1]);
    }

    for(int i = 0;i < n;i++)
        if(arr[i] != i+1) cout<<arr[i]<<" ";
}