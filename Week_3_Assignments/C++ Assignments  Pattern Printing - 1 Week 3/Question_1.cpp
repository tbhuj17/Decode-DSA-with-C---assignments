// Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;

int counter = 0;
int main()
{
    for(int i = 1; i <= 4; i++)
    {
        counter = 1;
        while(counter <= 4)
        {
            cout<<i<<" ";
            counter++;
        }
        cout<<endl;
    }
}