#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        /* Initially fill the stack in reverse order of nums. Then traverse
        in reverse order in nums. Then apply the same algorithm of POP-> ANS -> PUSH*/
        int n = nums.size();
       vector<int> ans(n);
       stack<int> st;
       // filling stack in reverse order.
       for(int i = n-1;i >= 0;i--)
       st.push(nums[i]);
       // POP ANS PUSH
       for(int i = n-1;i >= 0;i--)
       {
           while(st.size() != 0 && st.top() <= nums[i]) st.pop();

           if(st.size() == 0) ans[i] = -1;
           else ans[i] = st.top();

           st.push(nums[i]);
       }
       return ans; 
    }
};

int main()
{
    vector<int> nums = {3,1,2,5,4,6,2,3};
    Solution s;
    vector<int> ans = s.nextGreaterElements(nums);
    cout<<"Original:- ";
    for(int i = 0;i < nums.size();i++)   cout<<nums[i]<<" ";
    cout<<endl<<"Answer:- ";
    for(int i = 0;i < ans.size();i++)   cout<<ans[i]<<" ";
}