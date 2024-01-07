// Given three points (x1, y1), (x2, y2) and
// (x3, y3), write a program to check if all the three points fall on one straight line.

#include<iostream>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    float slope_1, slope_2;
    cout<<"Enter values for point 1:";
    cin>>x1>>y1;
    cout<<"Enter values for point 2:";
    cin>>x2>>y2;
    cout<<"Enter values for point 3:";
    cin>>x3>>y3;
    slope_1 = (y2-y1)/(x2-x1);
    slope_2 = (y3-y2)/(x3-x2);
    if(slope_1==slope_2) cout<<"All points lie in the same line.";
    else cout<<"They donot form a straight line.";

    
}