// Given an array of integers, print a sum triangle using recursion from it such that the first level has
// all array elements. After that, at each level the number of elements is one less than the previous
// level and elements at the level will be the sum of consecutive two elements in the previous level.

#include<iostream>
#include<vector>

using namespace std;

void sum_triangle(vector <int> ans, vector <int> original)
{
    if(original.size() == 1) return;

    for(int i = 0;i < original.size()-1;i++)
    {
        ans.push_back(original[i] + original[i+1]);
    }
    cout<<"[ ";
    for(int j = 0; j < ans.size();j++)
        cout<<ans[j]<<" ";
    cout<<"]";
    cout<<endl;
    vector <int> copy;
    original.clear();

    for(int k = 0;k < ans.size();k++)
        original.push_back(ans[k]);
    ans.clear();
    sum_triangle(ans, original);

}
int main()
{
    vector <int> original;
    vector <int> ans;

    original.push_back(5);
    original.push_back(4);
    original.push_back(3);
    original.push_back(2);
    original.push_back(1);
    
    sum_triangle(ans, original);

}   