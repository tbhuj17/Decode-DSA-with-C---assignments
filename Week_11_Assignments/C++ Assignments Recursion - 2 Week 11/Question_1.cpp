// Print all the elements of an array in reverse order.

#include<iostream>
using namespace std;

void print_array(int arr[], int n, int idx)
{
    if(idx == -1)
    {
        cout<<endl;
        return;
    } 
    cout<<arr[idx]<<" ";
    print_array(arr, n, idx-1);

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, n, n-1);
}