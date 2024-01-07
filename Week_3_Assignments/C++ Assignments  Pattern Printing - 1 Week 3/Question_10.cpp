// Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter val for n: ";
    cin>>n;
    for(int i = 1; i <= n;i++)
    {
        for(int k = i; k > 0; k--)
            cout<<k<<" ";
            cout<<endl;
    }
}