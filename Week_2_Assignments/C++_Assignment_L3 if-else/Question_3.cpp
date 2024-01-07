// Any year is input through the keyboard. Write a program to determine whether the year is a leap year
// or not. (Considering leap year occurs after every 4 years)

#include<iostream>
using namespace std;

int main()
{
    int yr;
    cout<<"Enter value for year: ";
    cin>>yr;

    if(yr%4==0 || yr%100==0 || yr%400==0) cout<<yr<<" is a leap year.";
    else cout<<yr<<" is not a leap year.";
}