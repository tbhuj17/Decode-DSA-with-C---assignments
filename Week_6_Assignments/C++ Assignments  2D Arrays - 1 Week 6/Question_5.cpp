// Write a program to print the row number having the maximum sum in a given matrix.
#include<iostream>
using namespace std;

int main()
{
    int m, n;
    int max_s = 0, sum = 0;

    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;

    int arr1[m][n], p;
    cout<<"Enter the elements for array : \n";
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
            cin>>arr1[i][j];
    } 

    for(int i = 0;i < m;i++)
    {
        sum = 0;
        for(int j = 0;j < n;j++)
        {
            sum = sum+arr1[i][j];
        }
        if(sum > max_s) 
        {
            max_s = sum;
            p = i;
        }
            
    } 
    cout<<endl<<p+1;
       
}