// Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number.

#include<iostream>
using namespace std;

// int rev_num = 0;
int reverse(int *rev_num, int num)
{
    if(num == 0) return *rev_num;
    int rem = num%10;
    *rev_num = (*rev_num)*10+rem;
    return reverse(rev_num, num/10);
}
int main()
{
    int num, rev_num = 0;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Reversed number is: "<<reverse(&rev_num, num)<<endl;
    // cout<<rev_num<<endl;
}