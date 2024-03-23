#include<iostream>
#include<queue>
using namespace std;
struct node
{
    int data;
    node*left;
    node* right;
};
void insertt(node*root, node*nn)
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
    levelorder(root);
    return 0;
}
