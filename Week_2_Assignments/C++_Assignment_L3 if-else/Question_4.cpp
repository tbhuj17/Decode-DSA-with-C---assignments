// Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.

#include<iostream> 
using namespace std;

int main()
{
    int len, bre;
    cout<<"Enter value for length: ";
    cin>>len;
    cout<<"Enter value for breadth: ";
    cin>>bre;

    int perimeter, area;
    area = len*bre;
    perimeter = 2*(len+bre);
    cout<<"Area is: "<<area<<endl;
    cout<<"perimeter is: "<<perimeter<<endl;

    if(area > perimeter) cout<<"Area is greater than perimeter."; 
    else cout<<"perimeter is greater than area." ;
}