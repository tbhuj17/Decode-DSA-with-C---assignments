// Sort the array in descending order using Bubble Sort.

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 1, 3, 5, 4, 6, 8, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i < n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(int i = 0;i < n-1;i++)
    {
        bool flag = false;
        
        for(int j = 0;j < n-i-1;j++)
        {
            
            if(arr[j] < arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
            
        }
        if(flag == false) break;
        
    }
    for(int i = 0;i < n;i++)
        cout<<arr[i]<<" ";
    
}