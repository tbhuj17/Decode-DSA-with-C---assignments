// WAP to find the largest three elements in the array.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    
    int arr[] = {89, 43, 12, 45, 23, 1000};
    int first = arr[0];
    int second = arr[0];
    int third = arr[0];
    for(int i = 0;i < 6; i++)
    {
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third)
        {
            third = arr[i];
        }
    }
    cout<<first<<" "<<second<<" "<<third;
}

