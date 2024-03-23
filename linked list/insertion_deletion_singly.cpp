#include<iostream>
using namespace std;
class imple;
class node;
class node
{
    int data;
    node *next;
public:

    node(int d)
    {
        data=d;
        next=NULL;
    }
    friend class imple;
};
class imple
{
    friend class node;
    node* first;
public:
    imple()
    {
        first=NULL;
    }
    void insertatbegin(int d)
    {
        node*nn=new node(d);
        nn->next=first;
        first=nn;
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
        }

    }
    void insertafter(int x,int y)  //after x,insert a new node of data y
    {
        node * nn=new node(y);
        node * temp=first;
        while(temp->data!=x)
        {
            temp=temp->next;
        }
        nn->next=temp->next;
        temp->next=nn;
    }
     void insertbefore(int x,int y)  //before x,insert a new node of data y
    {
        node * nn=new node(y);
        node * temp=first;
        while(temp->next->data!=x)
        {
            temp=temp->next;
        }
        nn->next=temp->next;
        temp->next=nn;
    }
    void deleteafter(int x)
    {
        node*temp=first;
        while(temp->data!=x)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;

    }
     void deletebefore(int x)
    {
        node*temp=first;
        while(temp->next->next->data!=x)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;

    }
    void deleteatbegin()
    {
        first=first->next;
    }
    void deleteatend()
    {
        node*temp=first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
    }
    void display()
    {
        node* temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;

        }

    }

};
main()
{

    imple a;
    a.insertatend(1);
    a.insertatend(2);
    a.insertatend(3);
    a.insertatend(4);
    a.insertatend(5);
   // a.insertafter(2,6);
   // a.insertatbegin(64);
    //a.insertbefore(5,20);
    a.deleteafter(3);
    a.deletebefore(3);
    a.deleteatbegin();
    a.deleteatend();
    a.display();
}

