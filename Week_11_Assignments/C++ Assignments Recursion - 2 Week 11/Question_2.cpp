// Print index of a given element in an array. If not present, print -1.

#include<iostream>
using namespace std;

void print_index(int arr[], int n, int idx, int num)
{
    if(idx == -1)
    {
        cout<< -1 <<endl;
        return;
    }
    if(arr[idx] == num)
    {
        cout<<"Present at position: "<<idx<<endl;
        return;
    }
    print_index(arr, n, idx-1, num);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
            //   0  1  2  3  4  5
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = -1;
    cout<<"Enter a number to search: ";
    cin>>num;
    print_index(arr, n, n-1, num);
}