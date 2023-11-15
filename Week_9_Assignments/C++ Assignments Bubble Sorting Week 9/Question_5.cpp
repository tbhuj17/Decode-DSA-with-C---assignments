// Check if the given array is almost sorted. (elements are at-most one position away)

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int arr[] = {2, 1, 3, 4, 6, 5, 8, 7};
    int counter = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i < n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(int i = 0;i < n-1;i++)
    {
        bool flag = false;
        counter++;
        for(int j = 0;j < n-i-1;j++)
        {
            
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
            
        }
        if(flag == false) break;
        
    }
    for(int i = 0;i < n;i++)
        cout<<arr[i]<<" ";
    if(counter == 2) cout<<"\nArray is nearly sorted.";
    else cout<<"\nArray is not nearly sorted."; 
}

