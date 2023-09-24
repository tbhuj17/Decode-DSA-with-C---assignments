// Print the following pattern
// Input: n = 4
// Output:
//      A
//    B A B
//  C B A B C
//D C B A B C D

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int k = n-i; k>0;k--)
            cout<<"  ";
        for(int j = i; j > 0;j--)
        {
            cout<<(char)(j+64)<<" ";
        }
        for(int l = 1; l <= i;l++)
        {
            if(l==1) continue;
            cout<<(char)(l+64)<<" ";
        }
        cout<<endl;
    }
}

