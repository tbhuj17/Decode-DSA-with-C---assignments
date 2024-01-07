
#include<iostream>
using namespace std;

int main()
{
    int n_o_r, n_o_c;
    cout<<"Enter number of rows: ";
    cin>>n_o_r;
    cout<<"Enter number of cols: ";
    cin>>n_o_c;
    cout<<"Enter the element to be searched: ";
    int tgt;
    cin>>tgt;
    int arr[n_o_r][n_o_c];
    cout<<"Enter array elements: \n";
    for (int i = 0; i < n_o_r; i++)
    {
        for(int j = 0; j < n_o_c; j++)
        {
            cin>>arr[i][j];
        }
    }
    int lo = 0;
    int hi = n_o_r-1;
    int flag = false;
    // Applying binary search on number of rows.
    while(lo <= hi)
    {
        int mid = (hi + lo)/2;
        
        if(tgt < arr[mid][0])   hi = mid-1;
        else if(tgt > arr[mid][n_o_c-1]) lo = mid+1;
        else
        {
            int low = 0;
            int high = n_o_c-1;
            // Binary Searching within the current row.
            while(low<=high)
            {
                int middle = low + (high-low)/2;
                if(tgt == arr[mid][middle]) 
                {
                    flag = true;
                    break;
                }
                else if(tgt > arr[mid][middle]) low = middle+1;
                else high = middle-1;
                if(flag == true) break;
            }
        }
        if(flag == true)
        {
            cout<<"true";
            break;
        }

    }
    if(flag == false) cout<<"false";
       
}