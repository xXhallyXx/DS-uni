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

node* insertBST(node *root,int val)
{
    if(root==NULL)
    {
        return new node(val);
    }
    if (val<root-> data)
    {
        root->left=insertBST(root->left,val);
    }
    else
    {

        root->right=insertBST(root->right,val);
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
void preorder(node* root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{

    node *root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);

    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    cout<<"inorder traversal "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder traversal "<<endl;
    preorder(root);
    return 0;}
