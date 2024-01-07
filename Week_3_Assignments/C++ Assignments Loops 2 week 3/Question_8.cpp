// Print first ‘n’ fibonacci numbers.

#include<iostream>
using namespace std;

int main()
{
    int a = 1, b = 1, fibbo, n;
    cout<<"Enter val for n: ";
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(int i = 1; i <= n-2; i++)
    {
        fibbo = a+b;
        cout<<fibbo<<endl;
        a = b;
        b = fibbo;
    }
}