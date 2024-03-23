
#include<iostream>
using namespace std;
struct node
{
int data;
node *left;
node *right;
};
insertt(node*root, node*nn)
    {
        cout<<"where to insert right/left of "<<root->data;
        char ch;
        cin>>ch;
        if(ch=='r')
        {
            if(root->right==NULL)
                root->right=nn;
            else
                insertt(root->right,nn);
        }
        else
        {
            if(root->left==NULL)
                root->left=nn;
            else
                insertt(root->left,nn);
        }
    }
void preorder(node *root)
{
if(root== NULL) return;
cout<<root->data;
preorder(root->left);
preorder(root->right);
}
void inorder(node *root)
{
if(root== NULL) return;
inorder(root->left);
cout<<root->data;
inorder(root->right);
}
void postorder(node *root)
{
if(root== NULL) return;
postorder(root->left);
postorder(root->right);
cout<<root->data;
}
node*get_node()
    {
        node*temp;
        temp=new node;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
    }
int main()
{
    node*nn,*root;
    root=NULL;
    char ans;
    do
    {
      nn=get_node();
      cin>>nn->data;
      if(root==NULL)
          root=nn;
      else
        insertt(root,nn);
      cout<<"do you want to enter more elements? ";
     cin>>ans;
    }while(ans=='y');
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
}
