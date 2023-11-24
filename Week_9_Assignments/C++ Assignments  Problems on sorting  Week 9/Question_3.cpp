// Given an integer array and an integer k where k<=size of array, We need to return the kth
// smallest element of the array.

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {23,12,67,22,90,33};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter value for K: ";
    int k;
    cin>>k;
    for(int i = 0;i < k;i++)
    {
        int min = INT_MAX;
        int min_dx = -1;
        for(int j = i+1;j <n;j++)
        {
            if(min > arr[j]) 
            {
                min = arr[j];
                min_dx = j;
            }
        }
        swap(arr[i], arr[min_dx]);
    }
    cout << "Kth Smallest Element is : " << arr[k-1] ;

}
// In the above code, we are using selection sort algorithm to find the kth smallest