#include <iostream>
#include<vector>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* helper(vector<int>& arr, int lo, int hi)
{
    if(lo > hi) return NULL;
    int mid = lo+(hi-lo)/2;
    TreeNode *root = new TreeNode(arr[mid]);
    root->left = helper(arr, lo, mid-1);
    root->right = helper(arr, mid+1, hi);
    return root;
}

void inorderTraversal(TreeNode* root) {
    if (root == NULL)   return;
    
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

void minInBST(TreeNode *root, int *p)
{
    if(root->left == NULL && root->right == NULL) 
    {
        *p = root->val;
        return;
    }
    minInBST(root->left, p);
}

void maxInBST(TreeNode *root, int *p)
{
    if(root->left == NULL && root->right == NULL) 
    {
        *p = root->val;
        return;
    }
    maxInBST(root->right, p);
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();

    TreeNode* root = helper(arr, 0, n-1);

    int minBST, maxBST;
    minInBST(root, &minBST);
    cout<<"Minimum in a BST is: "<<minBST<<endl;

    maxInBST(root, &maxBST);
    cout<<"Maximum in a BST is: "<<maxBST;
    return 0;
}
