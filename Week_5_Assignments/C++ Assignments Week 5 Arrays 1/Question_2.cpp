// Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of array elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i < n;i++){ cin>>arr[i];}    //input
    int lar = 0, sec_lar = 0;


    for(int i = 0; i < n;i++)   //traverse through array
    {
        if(arr[i] > lar)
        { 
            sec_lar = lar;
            lar = arr[i];
        }

    }
    cout<<lar<<" is largest.\n";
    cout<<sec_lar<<" is second largest.";
}