// Print the following pattern
// Input: n = 4
// Output:
// A
// A B
// A B C
// A B C D

#include<iostream>
using namespace std;

int main()
{
    int n, counter;
    cout<<"Enter a number: ";
    cin>>n;
    
    for(int i = 65; i <= n+65; i++)
    {
        counter = 65;
        while(counter < i)
        {
            cout<<(char)counter<<" ";
            counter++;
        }
        cout<<endl;
    }
}