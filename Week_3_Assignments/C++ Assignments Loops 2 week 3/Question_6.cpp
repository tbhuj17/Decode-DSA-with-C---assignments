// WAP to print the sum of a given number and its reverse.
#include<iostream>
using namespace std;

int main()
{
    int num, rev = 0, rem;
    cout<<"Enter a number: ";
    cin>>num;
    int num_copy = num;
    while(num != 0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    cout<<rev + num_copy;
}