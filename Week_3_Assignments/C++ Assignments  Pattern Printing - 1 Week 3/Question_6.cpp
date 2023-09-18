// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******

#include<iostream>
using namespace std;

int main()
{
    int m,n;    //m=rows, n=cols
    cout<<"Enter val for num of rows: ";
    cin>>m;
    cout<<"Enter val for num of cols: ";
    cin>>n;

    for(int i = 1; i<=m;i++)
    {
        for(int j = 1; j<=n;j++)
        {
            if(i==1||i==m||j==1||j==n)
            cout<<"*";
            else cout<<" ";
        }
            cout<<endl;
    }


}