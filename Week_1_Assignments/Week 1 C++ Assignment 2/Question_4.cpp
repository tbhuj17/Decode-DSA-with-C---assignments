// WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;

int main()
{
    int rad, height;
    const float PI = 3.14;
    float vol;
    cout<<"Enter the value for radius of cylinder: "<<endl;
    cin>>rad;
    cout<<"Enter the value for height of cylinder: "<<endl;
    cin>>height;
    vol = PI*rad*rad*height;
    cout<<"Volume of cylinder is: "<<vol<<endl;
}