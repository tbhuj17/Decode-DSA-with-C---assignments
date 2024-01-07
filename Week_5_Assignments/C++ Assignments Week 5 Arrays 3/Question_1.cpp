// Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
using namespace std;

int main()
{
    int n, counter = 0;
    cout<<"Enter number of elems: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elems: ";
    //input
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }

    for(int i = 0;i < n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            for(int k = j+1; k < n;k++)
            {
                if(arr[i] + arr[j] == arr[k])
                {
                    counter++;
                }
            }
        }
    }
    cout<<counter;
}