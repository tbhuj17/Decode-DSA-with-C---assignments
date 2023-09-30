// Check if the given array is sorted or not.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elems: ";
    cin>>n;
    bool flag = false;
    int arr[n];
    cout<<"Enter array elems: ";
    for(int i = 0;i < n;i++)    //input
        cin>>arr[i];
    
    for(int i = 1; i < n;i++)   //checking
    {
        if(arr[i-1] > arr[i])
        {
            flag = false;       // not sorted
            break;
        }
        else
        {
            flag = true;
        }
    }
    if(flag == true)    cout<<"Sorted";
    else cout<<"Not sorted";
}