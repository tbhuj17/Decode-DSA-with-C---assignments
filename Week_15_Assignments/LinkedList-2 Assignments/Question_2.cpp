#include<iostream>
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
    ListNode* mergeInBetween(ListNode* head1, int a, int b, ListNode* head2) {
        ListNode *ptr = head2;  //for finding last elem of list2
        // finding last elem of list 2
        while(ptr->next != nullptr)
            ptr = ptr->next;
        // for mapping t1 to a and t2 to b
        ListNode *t1 = head1;
        ListNode *t2 = head1;
        int i = 0, j = 0;
        while(i < a-1 || j < b)
        {
            if(i < a-1)
            {
                t1 = t1->next;
                i++;
            }
            if(j < b)
            {
                t2 = t2->next;
                j++;
            }
        }
        t1->next = head2;
        ptr->next = t2->next;
        return head1;
    }
};