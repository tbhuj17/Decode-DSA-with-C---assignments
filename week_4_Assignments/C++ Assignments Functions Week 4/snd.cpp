#include<iostream>
using namespace std;

class A
{
    public:
        int area(int len, int bre) {return len*bre;}
        int area(int rad) {return 3.14*rad*rad;}
};
int main()
{
    A a1;
    cout<<a1.area(2, 3)<<endl;
    cout<<a1.area(5);
}