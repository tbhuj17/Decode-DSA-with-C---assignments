// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
#include<iostream>
using namespace std;

int main()
{
    int n, p = 1;
    cout<<"Enter number of rows/cols: ";
    cin>>n;
    int arr[n][n];
    //input
    

    int min_row = 0, max_row = n-1, min_col = 0, max_col = n-1;
    int i,j;
    while(min_row <= max_row && min_col <= max_col)
    {
        // right, 
        for(i = min_col,j = min_row;i <= max_col;i++)
        {
            arr[j][i] = p;
            p++;
        }
        min_row++;
        if(min_row > max_row || min_col > max_col) break;
        //down
        for(i = min_row,j = max_col;i <= max_row;i++)
        {
            arr[i][j] = p;
            p++;
        }
        max_col--;
        if(min_row > max_row || min_col > max_col) break;
        //left
        for(i = max_col,j = max_row;i >= min_col;i--)
        {
            arr[j][i] = p;
            p++;
        }
        max_row--;
        if(min_row > max_row || min_col > max_col) break;
        //up
        for(i = max_row,j = min_col; i>= min_row; i--)
        {
            arr[i][j] = p;
            p++;
        }
        min_col++;
        if(min_row > max_row || min_col > max_col) break;
        
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }   

}