// : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;

int product(int *a, int *b)
{
    return (*a * *b);
}
int main()
{
    int num1, num2;
    int *ptr1 = &num1, *ptr2 = &num2;
    cout<<"Enter value for num1: ";
    cin>>*ptr1;
    cout<<"Enter value for num2: ";
    cin>>*ptr2;
    cout<<"Product of "<<*ptr1<<" and "<<*ptr2<<" is: "<<product(ptr1, ptr2);
}