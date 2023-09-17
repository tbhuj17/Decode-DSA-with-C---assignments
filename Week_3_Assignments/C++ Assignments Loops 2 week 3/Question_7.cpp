// Print the factorials of first ‘n’ numbers
#include<iostream> 
using namespace std;

int main()
{
    int n, fact = 1;
    cout<<"Enter value for n: ";
    cin>>n;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j>=1; j--)
        fact = fact*j;
        cout<<fact<<endl;
        fact = 1;
    }
}