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
    ListNode* deleteMiddle(ListNode* head) {
        int mid = 0;
        ListNode *slow = head;
        ListNode *fast = head;
        if(head == NULL || head->next == NULL) return NULL;
        //finding mid elem.
        while(fast != NULL && fast->next != NULL)
        {
            mid++;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // deleting elem
        ListNode *temp = head;
        for(int i = 1;i <= mid-1;i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};

void display(ListNode *head)
    {
        ListNode *temp = head;
        while(temp != NULL)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
int main()
{
    Solution s;
    ListNode *a = new ListNode(10);
    ListNode *b = new ListNode(20);
    ListNode *c = new ListNode(30);
    ListNode *d = new ListNode(40);
    ListNode *e = new ListNode(50);
    ListNode *f = new ListNode(60);
    ListNode *g = new ListNode(70);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    ListNode *head = a;
    cout<<"List before deleting: ";
    display(head);
    s.deleteMiddle(head);
    cout<<"List after deleting: ";
    display(head);
}