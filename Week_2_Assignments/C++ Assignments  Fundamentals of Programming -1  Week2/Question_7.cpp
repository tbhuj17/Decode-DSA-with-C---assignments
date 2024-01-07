// Given a point (x, y), write a program to find 
// out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter value for x: ";
    cin>>x;
    cout<<"Enter value for y: ";
    cin>>y;

    if(x==0 && y==0) cout<<"Point lies on origin.";
    else if(x>0 && y==0) cout<<"Point lies X-Axis";
    else if(x==0 && y>0) cout<<"Point lies on Y-Axis";
    else cout<<"Point lies on plane.";
}