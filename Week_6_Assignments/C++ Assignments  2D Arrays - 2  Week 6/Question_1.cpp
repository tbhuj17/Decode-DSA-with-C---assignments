// Write a program to print the elements of both the diagonals in a square matrix.
#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter number of rows/cols: ";
    cin>>m;
    int arr[m][m];
    //input
    cout<<"Enter array elems: \n";
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
            cin>>arr[i][j];
    }

    for(int i = 0;i <m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(i == j) cout<<arr[i][j]<<" ";
            else if(i + j == m-1) cout<<arr[i][j]<<" ";
            else cout<<" "; 
        }
        cout<<endl;
    }
}