#include<iostream>
#include<algorithm>

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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

        ListNode *temp = head;
        ListNode *left = NULL;
        ListNode *right = NULL;
        int n = 1;
        while(temp)
        {
            n++;
            temp = temp->next;
        }
        int i = 1;
        temp = head;
        while(temp)
        {
            if(i == k)  left = temp;
            if(i == n-k)
            {
                right = temp;
            }
            temp = temp->next;
            i++;
        }
        swap(left->val, right->val);
        return head;
    }
};