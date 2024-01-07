
// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
// maximum number of 1’s.

#include<iostream>
using namespace std;

int main()
{
    int n_o_r, n_o_c;
    int counter = 0, max_ones_row = -1, ones = -1; 

    
    cout << "Enter the number of rows: ";
    cin >> n_o_r;
    cout << "Enter the number of columns: ";
    cin >> n_o_c;

   
    int matrix[n_o_r][n_o_c];

    
    cout << "Enter the elements of the matrix: " << endl;
    for(int i=0; i<n_o_r; i++)
    {
        for(int j=0; j<n_o_c; j++)
        {
            cin >> matrix[i][j];
        }
    }

    
    for(int i = 0; i < n_o_r; i++)
    {
        
        int lo = 0;
        int hi = n_o_c-1;
        int mid = lo+(hi-lo)/2;
        while(lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if(matrix[i][mid] < 1) lo = mid+1;
            else if(matrix[i][mid] == 1)
            {
                if(matrix[i][mid-1] == 1) hi = mid-1;
                if(matrix[i][mid] == 1 && matrix[i][mid-1] == 0) break;
            }
        }
        ones = n_o_c-mid;

        if(ones > counter)
        {
            counter = ones;
            max_ones_row = i;
        }
    }
    cout << max_ones_row;
}
