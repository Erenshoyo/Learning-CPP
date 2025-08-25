#include<iostream>
#include "binarysearchtree.cpp"

using namespace std;

int leafCount(TreeNode<int> *node) {
    if(node == NULL) {
        return 0;
    }
    else if(node->left == NULL){
        return 1;
    }
    else if(node->right == NULL){
        return 1;
    }

    return leafCount(node->left) + leafCount(node->right);
}

TreeNode<int> *Insert(TreeNode<int>* root, int val) {
    if(root == NULL) {
        TreeNode<int>* newNode = new TreeNode<int>;
        newNode->info = val;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    if(val < root->info){
        root ->left = Insert(root->left, val);
    }else{
        root ->right = Insert(root->right, val);
    }
    return root;
}

int main()
{
    int n;
    cout << "Number of elements: ";
    cin >> n;

    TreeType<int> tree;
    TreeNode<int>* root = NULL;

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        tree.InsertItem(val);
        root = Insert(root, val);
    }

    cout << "No. of leaves = " << leafCount(root);

    return 0;
}
