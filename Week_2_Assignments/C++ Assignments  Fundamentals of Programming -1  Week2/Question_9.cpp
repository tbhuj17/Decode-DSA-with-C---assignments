// Write a C++ program to input any character and check whether it is the alphabet, digit or special
// character.

#include<iostream>
using namespace std;

int main()
{
    // cout<<(int)'9';
    char ch;
    cout<<"Enter value: ";
    cin>>ch;
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122) cout<<"alphabet";
    if(ch>=48 && ch<=57) cout<<"digit";
    else cout<<"special character.";
}