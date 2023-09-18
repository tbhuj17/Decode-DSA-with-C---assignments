// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;

    while(n != 0)
    {
        for(int i = 1; i <= n; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        n--;
    }
}