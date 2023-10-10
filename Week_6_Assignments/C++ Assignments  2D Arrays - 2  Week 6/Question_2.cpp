// Write a program to rotate the matrix by 90 degrees anti-clockwise.
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
        {
            cin>>arr[i][j];
        }
    }
    // transpose
    for(int i = 0;i < n;i++)
    {
        for(int j = i+1; j < n;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // swapping row elems
    int min_row = 0, max_row = n-1;
    for(int i = 0;i < n && min_row <= max_row;i++)
    {
        for(int j = 0; j < n;j++)
        {
            int temp = arr[min_row][j];
            arr[min_row][j] = arr[max_row][j];
            arr[max_row][j] = temp;
        }
        min_row++;
        max_row--;
    }  
    cout<<"Array after rotating anti-clockwise is: \n";  
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}