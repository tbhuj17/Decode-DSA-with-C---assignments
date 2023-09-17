// Ques 5: WAP to find the difference between ASCII of two characters ,take them as input .

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    char p,q;
    int a,b;
    cout<<"Enter value for char 1";
    cin>>p;
    cout<<"Enter value for char 2";
    cin>>q;
    a = (int)p;
    b = (int)q;
    cout<<"The difference between their ASCII values is: "<< abs(a-b)<<"."<<endl;
}