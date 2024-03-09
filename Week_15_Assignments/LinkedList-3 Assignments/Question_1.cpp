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
    void display(ListNode *head)
    {
        ListNode *temp = head;
        while(temp)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
    ListNode* deleteDuplicates(ListNode* head) {
        // if(head == NULL || head->next == NULL) return head;
        ListNode *c = new ListNode(100);
        ListNode *tc = c;
        ListNode *a = head;
        ListNode *b = head->next;

        bool t = false;
        while(b)
        {
            while(b && a->val == b->val)
            {
                t = true;
                b = b->next;
            }

            if(t == false)
            {
                tc->next = a;
                a = b;
                if(b) b = b->next;
                tc = tc->next;
            }
            else
            {
                a = b;
                if(b) b = b->next;
            }
            
            t = false;
        }
        tc->next = a;
        return c->next;
    }
};

int main()
{
  Solution s;
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(3);
    ListNode *e = new ListNode(4);
    ListNode *f = new ListNode(4);
    ListNode *g = new ListNode(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    a = s.deleteDuplicates(a);
    s.display(a);
}