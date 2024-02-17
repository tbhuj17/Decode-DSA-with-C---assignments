
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
    ListNode* removeElements(ListNode* head, int value) {
        
        if (head == NULL) return NULL;
        
       
        while (head != nullptr && head->val == value) {
            ListNode* temp = head;
            head = head->next;
            delete temp; 
        }
        
        ListNode* temp = head;
        while (temp != NULL && temp->next != NULL) {
            if (temp->next->val == value) {
                temp->next = temp->next->next;
                
            } else {
                temp = temp->next;
            }
        }
        
        return head;
    }
};
