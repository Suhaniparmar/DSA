#include<iostream>
using namespace std;
class imple;
class node
{
    friend class imple;
    int data;
    node*prev;
    node*next;
public:
    node(int d)
    {
        data=d;
        prev=NULL;
        next=NULL;
    }
};
class imple
{
    node*first;
public:
    imple()
    {
        first=NULL;
    }
    void insertatend(int d)
    {
        node*nn=new node(d);
        if(first==NULL)
        {
            first=nn;
        }
        else
        {
            node*temp=first;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=nn;
            nn->prev=temp;
        }
    }
    void insertatbegin(int d)
    {
        node*nn=new node(d);
        nn->next=first;
        first=nn;
        nn->prev=NULL;
        first=nn;

    }
    void insertafter(int x,int y)
    {
        node*nn=new node(y);
        node*temp=first;
        while(temp->data!=x)
        {
            temp=temp->next;
        }
        nn->next=temp->next;
        nn->prev=temp;
        temp->next=nn;
        temp->next->prev=nn;
    }
    void insertbefore(int x,int y)
    {
        node*nn=new node(y);
        node*temp=first;
        while(temp->data!=x)
        {
            temp=temp->next;
        }
        nn->next=temp;
        nn->prev=temp->prev;
        temp->prev=nn;
        temp->prev->next=nn;

    }
    void deleteatend()
    {
        node*temp=first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
//temp=NULL;
    }
    void deleteatbegin()
    {

       // node*temp=first;
        first=first->next;
    }
    void deleteafter(int x)
    {
        node*temp=first;
        while(temp->data!=x)
        {
            temp=temp->next;
        }

        temp->next->next->prev=temp;
        temp->next=temp->next->next;
    }
    void deletebefore(int x)
    {
         node*temp=first;
         while(temp->data!=x)
         {
             temp=temp->next;
         }
        // temp->prev->prev->next=temp;
         //temp->prev=temp->prev->prev;
    }
    void display()
    {
        node*temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main()
{
    imple a;
    a.insertatend(1);
    a.insertatend(2);
    a.insertatend(3);
    a.insertatend(4);
    a.insertatend(5);
    a.insertatbegin(10);
    a.insertafter(3,6);
    a.insertbefore(4,100);
    a.deleteatbegin();
    a.deleteatend();
   // a.deleteafter(3);
   // a.deletebefore(3);
    a.display();
   return 0;
}
