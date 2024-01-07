// : Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;

const float PI = 3.14;

float area(int rad)
{    
    return PI*rad*rad;
}

int main()
{
    int rad;
    cout<<"Enter value for radius of circle: ";
    cin>>rad;
    cout<<"Area of circle is: "<<area(rad)<<" square units";

}