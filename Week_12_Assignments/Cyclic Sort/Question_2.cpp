// You have a set of integers s , which originally contains all the numbers from 1 to n .
// Unfortunately, due to some error, one of the numbers in s got duplicated to another number
// in the set, which results in repetition of one number and loss of another number.
// You are given an integer array nums representing the data status of this set after the error.
// Find the number that occurs twice and the number that is missing and return them in the form
// of an array.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 4};
               //0  1  2  3
    int i = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < n;i++)
    {
        while(arr[i] != arr[arr[i]-1]) swap(arr[i], arr[arr[i]-1]);
    }
    
    for(int i = 0;i < n;i++)
    {
        if(arr[i] != i+1) cout<<"["<<arr[i]<<", "<<i+1<<"]";
    }
    
}