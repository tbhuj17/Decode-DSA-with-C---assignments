// Print the following pattern
// Input: n = 5
// Output:
//        1
//      1 2 3
//    1 2 3 4 5
//  1 2 3 4 5 6 7
#include<iostream>
using namespace std;

int main()
{
    int n, counter;
    cout<<"Enter val for n: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        counter = 1;
        for(int k = n-i; k > 0; k--)
            cout<<"  ";
        for(int j = 1; j <= 2*i-1; j++)
        {
            cout<<counter<<" ";
            counter+=1;
        }
        cout<<endl;
    }
}