// If an array arr contains n elements, then check if the given array is a palindrome or not .
#include<iostream>
using namespace std;

void reverse_array(int arr[], int size)
{
    int p, q, temp;
    for(int p = 0, q = size-1; p < q;p++,q--)
    {
        temp = arr[p];
        arr[p] = arr[q];
        arr[q] = temp;
    }
}
void print_array(int arr[], int size)
{   
    for(int i = 0;i < size;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 3, 2, 1};
    int arr2[sizeof(arr1)/sizeof(arr1[0])];    //copy of original array.
    int size = sizeof(arr1)/sizeof(arr1[0]), counter = 0;
    for(int i = 0;i < size;i++)    //copying elems of arr to arr2.
    {
        arr2[i] = arr1[i];
    } 
    reverse_array(arr2, size);

    for(int i = 0;i < size;i++)
    {
        if(arr1[i] == arr2[i]) counter++;
        else break;
    }
    if(counter == size) cout<<"Palindrome";
    else cout<<"Not a palindrome.";
}