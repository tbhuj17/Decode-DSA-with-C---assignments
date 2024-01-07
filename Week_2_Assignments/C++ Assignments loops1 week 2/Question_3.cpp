
// Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i = 1; i <= 10; i++)
    {
        cout<<a<<" into "<<i<<" is: "<<a*i<<endl;
    }
}