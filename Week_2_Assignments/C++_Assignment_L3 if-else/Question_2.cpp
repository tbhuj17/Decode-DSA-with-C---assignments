// Given the radius of the circle, predict whether numerically the area of this circle is larger than the
// circumference or not.

#include<iostream> 
using namespace std;

int main()
{
    int rad;
    cout<<"Enter value for radius: ";
    cin>>rad;
    const float PI = 3.14;
    float circumference, area;
    area = PI*rad*rad;
    circumference = 2*PI*rad;
    cout<<"Area is: "<<area<<endl;
    cout<<"Circumference is: "<<circumference<<endl;

    if(area > circumference) cout<<"Area is greater than circumference."; 
    else cout<<"Circumference is greater than area." ;
}