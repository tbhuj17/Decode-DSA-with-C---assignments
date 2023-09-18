// Print the following pattern
// Input: n = 4
// Output:
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter value for n: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = n-i; j > 0; j--)
        {
            cout<<" ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<" ";
        }
        for(int j = n-i; j > 0; j--)
            cout<<"*";
        cout<<endl;
    }
}