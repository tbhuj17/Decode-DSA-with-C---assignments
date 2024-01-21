#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {3, 8, 6, 7, 5, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int st = 0;
    int ed = n-1;
    int pivot = (st+ed)/2;
    
    int i = st, j = ed;
    for(int i = 0;i < n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    while(i != pivot && j != pivot)
    {
        if(arr[i] < arr[pivot])i++;
        if(arr[j] > arr[pivot])j--;
        if(arr[i] > arr[pivot] && arr[j] < arr[pivot])  
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    for(int i = 0;i < n;i++)
        cout<<arr[i]<<" ";
}