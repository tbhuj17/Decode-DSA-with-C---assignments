// Find the min value in Binary Tree

#include<iostream>
#include<climits>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int find_min(Node* root, int *minimum)
{
    if(root == NULL) return INT_MAX;
    return min(root->val, min(find_min(root->left, minimum), find_min(root->right, minimum)));
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(-7);

    // making connections
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    
    int minimum = INT_MIN;
    cout<<endl<<find_min(a, &minimum)<<endl;

}