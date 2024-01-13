//Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
// steps at each level.

#include<iostream>
using namespace std;

int stairs(int n)
{
    if(n == 3) return 3;
    if(n == 2) return 2;
    if(n == 1) return 1;

    return (stairs(n-1)+stairs(n-2)+stairs(n-3));
}
int main()
{
    int no_s;
    cout<<"Enter number of stairs: ";
    cin>>no_s;
    cout<<stairs(no_s)<<endl;
}