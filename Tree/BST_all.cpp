
#include<iostream>
#include<queue>

using namespace std;
struct node
{
    int data;
    node*left;
    node*right;
};
void insertt(node*root,node*nn)
{
    if(nn->data>root->data)
    {
        if(root->right==NULL)
        {
            root->right=nn;
        }
        else
        {
            insertt(root->right,nn);
        }
    }
    if(nn->data<root->data)
    {
        if(root->left==NULL)
        {
            root->left=nn;
        }
        else
        {
            insertt(root->left,nn);
        }
    }
}
node* searchh(node* root,int key)
{
    node* temp=root;
    while(temp!=NULL)
    {
    if(temp->data==key)
    {
    cout<<"The"<<temp->data<<"element is present";
    return temp;
    }
    if(temp->data>key)
    temp=temp->left;
    else
    temp=temp->right;
    }
    return NULL;
}
node*get_node()
{
        node*temp;
        temp=new node;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
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

void levelorder(node* root)
 {
     if(root==NULL)
        return;
     queue<node*>q;
     q.push(root);
     while(!q.empty())
     {
         node* temp=q.front();
         cout<<temp->data;
         if(temp->left!=NULL)
            q.push(temp->left);
         if(temp->right!=NULL)
            q.push(temp->right);
         q.pop();
     }
 }


int main()
{
    node*root,*nn;
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
    cout<<"preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"inorder : ";
    inorder(root);
    cout<<endl;
    cout<<"postorder : ";
    postorder(root);
    cout<<endl<<endl;
    cout<<"levelorder : ";
    levelorder(root);
    cout<<endl<<endl;
    searchh(root,5);
    return 0;
}
