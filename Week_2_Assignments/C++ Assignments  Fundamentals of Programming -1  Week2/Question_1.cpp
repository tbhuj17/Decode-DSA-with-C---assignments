// Take 2 integers input and print the greatest of them

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value for num 1: ";
    cin>>a;
    cout<<"Enter value for num 2: ";
    cin>>b;

    if(a>b) cout<<"First number "<<a<<" is largest.";
    else cout<<"Second number "<<b<<" is largest.";
}