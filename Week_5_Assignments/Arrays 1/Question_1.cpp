// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;

int main()
{
    int n, product = 1;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    // Input
    for(int i = 0; i < n;i++)
    {
        cin>>arr[i];
    }
    // Calculating product
    for(int i = 0; i < n;i++)
    {
        product *= arr[i];
    }
    cout<<"TFhe product of array elements is: "<<product;
}