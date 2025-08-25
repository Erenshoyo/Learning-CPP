#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

template <class ItemType>
TreeNode<ItemType>* GetRoot(TreeType<ItemType>& t)
{
    return *(TreeNode<ItemType>**)&t;
}

template<class ItemType>
void breadthFirstSearch(TreeType<ItemType>& tree)
{
    TreeNode<ItemType>* root = GetRoot(tree);
    if(root == NULL)
        return;

    QueType<TreeNode<ItemType>*> q;
    q.Enqueue(root);

    while(!q.IsEmpty())
    {
        TreeNode<ItemType>* current;
        q.Dequeue(current);

        cout << current -> info <<" ";

        if(current -> left != NULL)
            q.Enqueue(current -> left);

        if(current -> right != NULL)
            q.Enqueue(current -> right);
    }
    cout << endl;
}

int main()
{
    TreeType<int> t;

    t.InsertItem(8);
    t.InsertItem(6);
    t.InsertItem(11);
    t.InsertItem(5);
    t.InsertItem(7);
    t.InsertItem(9);
    t.InsertItem(13);

    breadthFirstSearch(t);
    return 0;
}
