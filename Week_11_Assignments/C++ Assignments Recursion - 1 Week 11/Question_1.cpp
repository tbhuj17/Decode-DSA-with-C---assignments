// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
// recursion.

#include<iostream>
using namespace std;

void sum(int a, int b)
{
    if(b <= 1)
    {
        cout<<a<<endl;
        return;
    }
    
    sum(a+b, b-2);
}
int main()
{
    int a, b;
    cout<<"Enter value for number 1: ";
    cin>>a;
    cout<<"Enter value for number 2: ";
    cin>>b;
    if(a%2 == 0)a++;
    if(b%2 == 0)b--;
    sum(a, b);
}