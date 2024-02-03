// Q3. Implement a Linked List class.
// The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display
// functions.


#include<iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;
    Node *tail;
    int size;
    
public:
    // INSERTION FUNCTIONS
    void insert_at_head(int val)
    {
        Node *temp = new Node(val);
        if(size == 0)
        {
                head = tail = temp;
                size++;
        }
        else
        {
                temp->next = head;
                head = temp;
                size++;
        }
    }
    void insert_at_tail(int val)
    {
        Node *temp = new Node(val);
        if(size == 0)
        {
                head = tail = temp;
                size++;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            size++;
        }
    }
    void insert_in_between(int idx, int val)
    {
        if(idx < 0 || idx > size) cout<<"Not possible";
        else if(idx == 0) insert_at_head(val);
        else if(idx == size) insert_at_tail(val);
        else
       { 
            Node *temp = head;
            Node *t = new Node(val);

            for(int i = 1;i <= idx-1;i++)
                temp = temp->next;
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    // DELETION FUNCTIONS
    void delete_from_head()
    {
        head = head->next;
    }
    void delete_from_tail()
    {
        Node *temp = head;
        while(temp->next != tail)
            temp = temp->next;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIndex(int idx)
    {
        Node *temp = head;
        for(int i = 1;i < idx-1;i++)   temp = temp->next;
        temp->next = temp->next->next;
        size--;
    }

    // DISPLAY FUNCTION
    void display()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    // GET FUNCTION
    void get(int idx)
    {
        Node *temp = head;
        for(int i = 1;i <= idx-1;i++)
            temp = temp->next;
        cout<<temp->val<<endl;
    }
    //constructor 
    LinkedList(){head = NULL; tail = NULL; size = 0;}
};
int main()
{
    LinkedList ll;
    ll.insert_at_head(10);
    ll.display();
    ll.insert_at_head(20);
    ll.display();
    ll.insert_at_head(30);
    ll.display();
    ll.insert_at_tail(40);
    ll.display();
    ll.insert_at_tail(50);
    ll.display();
    ll.insert_at_tail(70);
    ll.display();
    ll.insert_at_tail(80);
    ll.display();
    ll.insert_at_tail(90);
    ll.display();
    ll.insert_at_tail(100);
    ll.display();
    ll.insert_in_between(3, 60);
    ll.display();
    ll.delete_from_head();
    ll.display();
    ll.delete_from_tail();
    ll.display();
    ll.deleteAtIndex(3);
    ll.display();
    ll.get(3);

    
}