// Given a positive integer, return true if it is a power of 2.

#include<iostream>
using namespace std;

int power(int n)
{
    if(n == 1) return 1;
    if(n%2 != 0) return 0;
    
    return power(n/2);
}
int main()
{
    cout<<power(23)<<endl;
    cout<<power(32)<<endl;
}