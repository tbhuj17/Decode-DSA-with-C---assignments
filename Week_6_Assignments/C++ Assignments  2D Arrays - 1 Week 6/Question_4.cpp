// Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
using namespace std;

int main()
{
    int m, n;

    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;

    int arr1[m][n];
    cout<<"Enter the elements for array : \n";
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
            cin>>arr1[i][j];
    }
    int max = arr1[0][0];
    for(int i = 0; i<m;i++)
    {
        for(int j = 0;j < n;j++)
            if(max < arr1[i][j]) max = arr1[i][j];
    }    
    cout<<max<<" is largest.";
}