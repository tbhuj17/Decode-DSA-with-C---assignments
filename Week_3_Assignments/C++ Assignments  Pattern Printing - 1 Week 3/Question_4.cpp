// Print the following pattern
// Input: n = 4
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int n, counter;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i <= n+1; i++)
    {
        counter = 1;
        if(i%2 != 0)
        {
            while(counter <= i)
            {
                cout<<counter<<" ";
                counter++;
            }
        }
        else
        {
            counter = 1;
            while(counter <= i)
            {
                cout<<(char)(counter+64)<<" ";
                counter++;
            }
        }
        cout<<endl;
    }
}