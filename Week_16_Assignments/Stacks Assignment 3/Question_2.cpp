#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        /*ALGORITHM:- First store the whole linked list in a vector
        Then find the next greater element of an element of vector.
        If the nge does not exist, then create an LL node of it.*/

        // creating a vector
        vector<int> list;
        ListNode *temp = head;
        while(temp != NULL){
            list.push_back(temp->val);
            temp = temp->next;
        }
        int n = list.size();
        // Finding nge using stack POP-> ANS -> PUSH

        stack<int> st;
        vector<int> nge(n);

        nge[n-1] = -1;
        st.push(list[n-1]);
        // creating nge
        for(int i = n-2;i >= 0;i--)
        {
            // pop
            while(st.size() > 0 && st.top() <= list[i]) st.pop();
            // ans
            if(st.size() == 0) nge[i] = -1;
            else nge[i] = st.top();
            //push
            st.push(list[i]);
        }
        // creating LL ans
        ListNode *c = new ListNode(100);
        ListNode *tc = c;
        for(int i = 0;i < n;i++)
        {
            if(nge[i] == -1)
            {
                ListNode *node = new ListNode(list[i]);
                tc->next = node;
                tc = tc->next;
            }
        }
        return c->next;
    }
};

int main()
{
    Solution s;
    
}