// Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G

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
            cout<<char(counter+64)<<" ";
            counter+=1;
        }
        cout<<endl;
    }
}