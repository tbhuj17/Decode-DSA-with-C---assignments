// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.

#include<iostream>
using namespace std;

void display(int *ptr, int size)
{
    for(int i = 0;i < size; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    // input
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i < n;i++)
    {
        if(i%2==0) arr[i] += 10;
        else arr[i] *=2;
    }

    display(arr, n);
}