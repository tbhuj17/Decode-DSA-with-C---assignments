// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int lo = 1;
    int hi = num;

    while(lo <= hi)
    {
        int mid = lo + (hi-lo)/2;

        if(mid * mid == num) 
        {
            cout<<"Perfect square.";
            break;
        }
        else if(mid * mid > num)    hi = mid-1;
        else lo = mid+1;

    }
}