//Ques: WAP to find the circumference of a circle with radius 10 in C++.

#include<iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    int rad = 10;
    float circumference;
    circumference = 2* PI * rad;
    cout<<"Circumference of circle is: "<<circumference<<endl;
}