// Write a program to apply binary search in array sorted in decreasing order.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {9,8,7,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 4;
    int lo = n-1;
    int hi = 0;

    while(hi <= lo)
    {
        int mid = hi + (lo-hi)/2;
        if(arr[mid] == target) 
        {
            cout<<"Element found at: "<<mid;
            break;
        }
        else if(arr[mid] > target) hi = mid+1;
        else lo = mid-1;
    }
}