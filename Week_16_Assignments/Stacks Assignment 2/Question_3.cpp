#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> nse(n);
        vector<int> ans(n);
        stack<int> st;
        
        nse[n-1] = 0;
        st.push(prices[n-1]);

        for(int i = n-2;i >= 0; i--)
        {
            // POP ANS PUSH
            while(st.size() != 0 && st.top() > prices[i]) st.pop();
            if(st.size() == 0) nse[i] = 0;
            else    nse[i] = st.top();
            st.push(prices[i]);
        }
        for(int i = 0;i < n;i++)
        {
            ans[i] = prices[i] - nse[i];
        }
        return ans;
    }
};

int main()
{
    vector<int> prices = {8, 4, 6, 2, 3};
    vector<int> ans;
    Solution s;
    ans = s.finalPrices(prices);
    cout<<"Prices:- \n";
    for(int i = 0;i < prices.size();i++) cout<<prices[i]<<" ";
    cout<<endl<<"Answer:- \n";
    for(int i = 0;i < ans.size();i++) cout<<ans[i]<<" ";

}