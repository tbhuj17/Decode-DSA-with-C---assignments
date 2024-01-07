// Q3: Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
int p(int num1, int num2)
{
    
    for(int i = num1; i <= num2; i++)
    {
        if(i%2!=0) cout<<i<<" ";
    }    
}
int main()
{
    int num1, num2;
    cout<<"Enter number 1: ";
    cin>>num1;

    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Odd numbers between "<<num1<<" and "<<num2<<" are: ";
    p(num1, num2);

}