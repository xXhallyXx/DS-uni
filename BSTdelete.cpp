#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    node(int valu)
    {
        data=valu;
        left=NULL;
        right=NULL;
    }
};
node* inorderSucc(node* root)
{
    node* curr=root;
    while(curr && curr->left !=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
node* deleteInBST(node* root, int key)
{
    if(key<root->data)
    {
        root->left=deleteInBST(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=deleteInBST(root->right,key);
    }
    else
    {
        if(root->left==NULL)
        {
            node* temp =root->right;
            free(root);
            return temp;
        }

        if(root->right==NULL)
        {
            node* temp =root->left;
            free(root);
            return temp;
        }
        node* temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteInBST(root->right,temp->data);

    }
    return root;
}
void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    node *root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->right=new node(6);

    inorder(root);
    cout<<endl;
    root=deleteInBST(root,5);
    inorder(root);
    return 0;
}
