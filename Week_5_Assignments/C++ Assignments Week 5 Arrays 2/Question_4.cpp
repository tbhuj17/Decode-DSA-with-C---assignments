// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.

#include<iostream>
using namespace std;

int main()
{
    int n, odd_sum = 0, even_sum = 0, final_sum = 0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    // input
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i < n;i++)
    {
        if(i%2==0) even_sum += arr[i];
        else odd_sum += arr[i];
    }
    final_sum = even_sum - odd_sum;
    cout<<"Final sum is: "<<abs(final_sum);
}