// Print the following pattern
// Sample Input : n = 4
// Output :
//    ****
//   ****
//  ****
// ****

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter valfor n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k = n-i;k>0;k--)
        cout<<" ";
        for(int j = 1; j<=n;j++)
            cout<<"*";
            cout<<endl;
    }
}