// Print the following pattern:-
// Input: n = 4
// Output:

// ABCDEFG
// ABC EFG
// AB   FG
// A     G

#include<iostream>
using namespace std;

int main()
{
    int n, counter;
    cout<<"Enter n: ";
    cin>>n;
    
    for(int i = 1; i <= n; i++)
    {
        int a = 1;
        counter = 1;
        if(i == 1)
        {
            for(int l = 1; l <= 2*n-1; l++)
            {
                cout<<(char)(a+64);
                a++;
            }
                cout<<endl;
                a = 1;
        }
        
        for(int j = n-i; j > 0; j--)
            cout<<(char)(j+64);
        for(int k = 1; k <= 2*i-1; k++)
        {
            cout<<" ";
            counter+=2;
            a++;
        }
        for(int j = n-i; j > 0; j--)
        {
            cout<<(char)(a+64);
            a++;
        }
        cout<<endl;

    }
}