// Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).
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
    int l1, l2, r1, r2;
    cout<<"Enter value for l1: ";
    cin>>l1;
    cout<<"Enter value for l2: ";
    cin>>l2;
    cout<<"Enter value for r1: ";
    cin>>r1;
    cout<<"Enter value for r2: ";
    cin>>r2;
    int sum = 0;
    for(int i = l1; i <= l2;i++)
    {
        for(int j = 0; j <= r2;j++)
        {
            sum += arr1[i][j];

        }
    }
    // Printing sum
    cout<<endl<<sum;
}