// Write a program to add two matrices and save the result in one of the given matrices.
#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    int arr1[m][n], arr2[m][n];
    cout<<"Enter the elements for array 1: \n";
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
            cin>>arr1[i][j];
    }
    cout<<"Enter the elements for array 2: \n";
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
            cin>>arr2[i][j];
    }
    //adding 
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            arr1[i][j] += arr2[i][j];
        }
    }
    cout<<"Sum of elems of array is :\n";
    // Printing array
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout<<arr1[i][j]<<" ";
        
        }
        cout<<endl;
    }
}