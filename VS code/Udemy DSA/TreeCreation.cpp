#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int data = 0)
    {
        val = data;
        left = right = NULL;
    }
};
Node* findnxt(Node* root);
void Inorder(Node* root)
{
    if(root == NULL)
        return;
    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
}
Node* insert(int data,Node* root)
{
    if(root == NULL)
    {
        return new Node(data);
    }
    else if(data < root->val)
        root->left = insert(data,root->left);
    else if(data > root->val)
        root->right = insert(data,root->right);
    return root;
}
Node* remove(int data,Node* root)
{
    if(root == NULL)
        return NULL;
    else if(data < root->val)
        root->left = remove(data,root->left);
    else if(data > root->val)
        root->right = remove(data,root->right);
    else{
        // Case 1: No children
        if(root->left == NULL and root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // Case 2: Has right child
        else if(root->left == NULL)
        {
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        // Case 2: Has left child 
        else if(root->right == NULL)
        {
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        // Case 3: Has both child 
        else{
            Node* temp = findnxt(root->right);
            root->val = temp->val;
            root->right = remove(temp->val,root->right);
        }
    }
    return root;
}
Node* findnxt(Node* root)
{
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
int main()
{
    Node* root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};
    for(auto x: arr)
    {
        root = insert(x,root);
    }
    int data = 0;
    cout<<"Enter value: ";
    cin>>data;
    Inorder(root);
    remove(data,root);
    cout<<endl;
    Inorder(root);
    return 0;
}