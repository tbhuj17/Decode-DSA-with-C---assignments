// Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;

int func(int num)
{
    int rem, counter = 0, num_copy = num;
    while(num != 0)
    {
        counter++;
        num/=10;
    }
    cout<<"Square of number is: "<<num_copy*num_copy<<endl;
    return counter;
}
int main()
{
    int num;
    cout<<"Enter a number of your choice: ";
    cin>>num;
    cout<<"Number of digits in "<<num<<" are: "<<func(num);

}