// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
// does not exist return -1.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,3,4,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    bool flag = false;
    cout<<"Enter key: ";
    cin>>key;
    int lo = 0;
    int hi = n-1;
    while(lo <= hi)
    {
        int mid = (lo + hi)/2;
        if(arr[mid] < key)  lo = mid+1;
        else if(arr[mid] > key) hi = mid-1;
        else
        {
            if(arr[mid+1] == key)   lo = mid+1;
            else
            {
                cout<<mid;
                flag = true;
            }
        }
        if(flag == true) break;

    }
}