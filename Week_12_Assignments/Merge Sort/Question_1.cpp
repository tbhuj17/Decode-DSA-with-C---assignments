// Given an array of integers, sort it in descending order using merge sort algorithm.

#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &n1, vector<int> &n2, vector<int> &ans)
{
    int i = 0, j = 0,k = 0;

    while(i < n1.size() && j < n2.size())
    {
        if(n1[i] > n2[j])
        {
            ans[k] = n1[i];
            i++;
            
        }
        else
        {
            ans[k] = n2[j];
            j++;
            
        }
        k++;
    }

    if(i == n1.size())
    {
        while(j < n2.size())
        {
            ans[k] = n2[j];
            j++;
            k++;
        }
    }

    if(j == n2.size())
    {
        while(i < n1.size())
        {
            ans[k] = n1[i];
            i++;
            k++;
        }
    }
}

void merge_sort(vector<int> &v)
{
    int n = v.size();
    if(n == 1) return;
    int n1 = n-n/2;
    int n2 = n-n1;

    vector<int> a(n1);
    vector<int> b(n2);

    for(int i = 0;i < n1;i++)
        a[i] = v[i];

    for(int i = 0;i < n2;i++)
        b[i] = v[i+n1];

    merge_sort(a);
    merge_sort(b);

    merge(a, b, v);
}
int main()
{
   vector<int> v = {8,3,5,1,7};
   cout<<"Original array: "<<endl;

    for(int i = 0;i < v.size();i++)   
        cout<<v[i]<<" ";

    merge_sort(v);

    cout<<"\nSorted array: "<<endl;
    for(int i = 0;i < v.size();i++)   
        cout<<v[i]<<" ";
}