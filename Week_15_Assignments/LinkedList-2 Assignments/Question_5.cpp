#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    int count_length_of_cycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        int len = 0;
        bool is_cycle = false;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                is_cycle = true;
                break;
            }
        }
        if(!is_cycle) return 0;
        else
        {
            ListNode *temp = head;
            while(temp != slow)
            {
                temp = temp->next;
                slow = slow->next;
            }
            temp = temp->next;
            len++;
            while(temp != slow)
            {
                temp = temp->next;
                len++;
            }
            return len;
        }
    }    
};

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
    g->next = c;
    

    int p = s.count_length_of_cycle(a);
    cout<<p;

    
}