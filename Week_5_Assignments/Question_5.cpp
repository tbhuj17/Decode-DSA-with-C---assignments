// WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.

#include<iostream>
using namespace std;

int main()
{
    int n, counter = 0;
    bool flag = false; 
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: \n";
    for(int i = 0; i < n;i++)
    {
        cin>>arr[i];
    }
    int small = arr[0];
    for(int  i = 0; i < n;i++)
    {
        if(arr[0] != 1) 
        {
            small = 1;
            cout<<small<<" is smallest missing.";
            flag = 1;
            break;
        }
        else
        {
            counter++;
            if(counter==arr[i]) continue;
            else
            {
                cout<<counter<<" is least positive number possible.";
                flag = 1;
                break;
            }
            
        }
    }
    if(flag == 0) cout<<"Not possible.";
    
}