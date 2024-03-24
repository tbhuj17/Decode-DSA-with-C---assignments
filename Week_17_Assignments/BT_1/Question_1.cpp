// Find the product of all values in Binary Tree

#include<iostream>
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

int find_pdt(Node *root, int *pdt)
{
    if(root == NULL) return 1;
    return root->val * find_pdt(root->left, pdt) * find_pdt(root->right, pdt);
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    // making connections
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    int  product = 1;
    cout<<endl<<find_pdt(a, &product)<<endl;
}