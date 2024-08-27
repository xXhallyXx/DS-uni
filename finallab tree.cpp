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
//val>root->data
        root->right=insertBST(root->right,val);
    }
    return root;
}
node* searchInBST(node* root, int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        return searchInBST(root->left,key);
    }

    return searchInBST(root->right,key);

}
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

    node *root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);

    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    cout<< "tree: "<<endl;
    inorder(root);
    cout<<endl;
    if(searchInBST(root,5)==NULL)
    {
        cout<<"key doesnt exist "<<endl;
    }
    else
    {
        cout<<"key exists"<<endl;
    }
    if(searchInBST(root,15)==NULL)
    {
        cout<<"key doesnt exist "<<endl;
    }
    else
    {
        cout<<"key exists";

    }
    root=deleteInBST(root,4);
    cout<<"after delete the value "<<endl;
    inorder(root);
    cout<<endl;

    return 0;
}

