// WAP to print the sum of all the even digits of a given number.

#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0, rem;
    cout<<"Enter a number: ";
    cin>>num;

    while(num!=0)
    {
        rem = num%10;
        if(rem % 2 == 0) sum = sum+rem;
        num = num/10;
    }
    cout<<endl<<sum;
}