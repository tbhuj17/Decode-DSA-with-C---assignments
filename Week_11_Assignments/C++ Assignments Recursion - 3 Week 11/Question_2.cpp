// Print all the increasing sequences of length k from first n natural numbers.

#include<iostream>
#include<string>
#include<vector>

using namespace std;

void sequences(vector<string>ans, vector<string>&original, int idx, int k)
{
    if(ans.size() == k)
    {
        for(int i = 0;i < ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }

    if(original.size()-idx + ans.size() < k) return;

    sequences(ans, original, idx+1, k);
    ans.push_back(original[idx]);
    sequences(ans, original, idx+1, k);
}
int main()
{
    int n, k;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Enter value of k: ";
    cin>>k;

    vector<string> str;
    vector<string> ans;
    for(int i = 1;i <= n;i++)
        str.push_back(to_string(i));
    
    sequences(ans, str, 0, k);
}