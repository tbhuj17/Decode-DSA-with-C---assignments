// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
// isosceles triangle.

#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3;
    cout<<"Enter value for side 1: ";
    cin>>s1;
    cout<<"Enter value for side 2: ";
    cin>>s2;
    cout<<"Enter value for side 3: ";
    cin>>s3;
    if(s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
    {
        cout<<"The sides form a triangle."<<endl;
        if(s1==s2==s3) cout<<"The triangle is equilateral.";
        else if(s1==s2 || s2==s3 || s3==s1) cout<<"The triangle is isoceles.";
        else cout<<"The triangle is scalene.";
    }
    else cout<<"The sides donot form a triangle."<<endl;
}