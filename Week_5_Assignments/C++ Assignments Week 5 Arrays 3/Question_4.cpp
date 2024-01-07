// Move all zeros to the end of the array.
#include<iostream>
using namespace std;



int main()
{
    int arr[] = {1, 0, 2, 0, 3}, temp;
    int size = sizeof(arr)/sizeof(arr[0]);
    // while loop
    int i = 0, j = size-1;
    while(i <= j)
    {
        if(arr[i] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else if(arr[j] == 0) j--;
        else if(arr[i] == 0 && arr[j] == 0) j--;
        else i++;
    }
    cout<<endl;
    for(int i = 0;i < size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}