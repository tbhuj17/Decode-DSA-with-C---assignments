#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of cols: ";
    cin>>n;
    int arr[m][n];
    bool flag = 0;
    cout<<"enter array elems: \n";
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i = 0;i < m;i++)
    {
        for(int j = 0; j < n;j++)
        {
            if(arr[i][j] == 0)
            {
                for(int k = 0;k < m;k++)
                {
                    for(int l = j;l <= j;l++)
                        arr[k][l] = 0;
                         
                }

                for(int k = i;k <= i;k++)
                {
                    for(int l = 0;l < n;l++)
                        arr[k][l] = 0;
                        
                }
                flag = 1;
            }
            if(flag == 1) break; 
        }
        
    }
    
    cout<<"\nFinal array is: \n";

    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}