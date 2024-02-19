// Next Greater Node in Linked List
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

//  Definition for singly-linked list.
struct ListNode {
     int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode *temp = head;
        // storing in new vector
        vector<int> list;
        while(temp != NULL)
        {
            list.push_back(temp->val);
            temp = temp->next;
        }
        int n = list.size();
        vector<int> ans(n);
        stack<int> st;

        ans[n-1] = 0;
        st.push(list[n-1]);

        
        // POP ANS PUSH
        for(int i = n-2;i>=0;i--)
        {
            while(st.size() > 0 && st.top() <= list[i]) st.pop();
            if(st.size() == 0) ans[i] = 0;
            if(st.size() != 0)ans[i] = st.top();
            st.push(list[i]);
        }
        return ans;
    }
};

