// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int lo = 0;
    int hi = n-1;

    while(lo <= hi)
    {
        int mid = lo+(hi-lo)/2;
        if(arr[mid] == mid+1)   lo = mid+1;
        if(arr[mid] == mid)
        {
            if(arr[mid] == arr[mid-1]) 
            {
                cout<<arr[mid];
                break;
            }
            else hi = mid-1;
        }
    }
}