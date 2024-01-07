// Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows/cols: ";
    cin>>n;
    int arr[n][n];
    cout<<"enter elems: \n";
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
            cin>>arr[i][j];
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(i == n/2 || j == n/2)
            {
                cout<<arr[i][j]<<" ";
            }
            else
            { 
                cout<<"  ";
            }

        }
        cout<<endl;
    }
}