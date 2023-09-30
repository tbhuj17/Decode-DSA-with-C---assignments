// Count the number of elements strictly greater than x.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> nums;
    int n, p, counter = 0, x;
    cout<<"Enter number of elements: ";
    cin>>n;
    //input
    for(int i = 0;i < n;i++)
    {
        cin>>p;
        nums.push_back(p);
    }
    cout<<"Enter the number: ";
    cin>>x;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] > x) counter++;
    }
    cout<<counter;
}