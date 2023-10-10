// Write a program to print the matrix in wave form.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows/cols: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter array elems: \n";
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
            cin>>arr[i][j];
    }

    for(int i = 0; i < n;i++)
    {
        if(i % 2 != 0)
        {
            for(int j = 0;j < n;j++)
                cout<<arr[j][i]<<" ";
        }
        else
        {
            for(int j = n-1;j >= 0;j--)
                cout<<arr[j][i]<<" ";
        }
    }

}