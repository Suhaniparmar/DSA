#include<iostream>
using namespace std;
class node
{
    friend class imple;
    int data;
    node*next;
public:
    node(int d,node*n)
    {
        data=d;
        next=n;
    }
};
class imple
{
    friend class node;
    node*first;
public:
    imple()
    {
       first=NULL;
    }
    void insertt(int d)
    {
        node*nn=new node(d,first);
        if(first==NULL)
        {
            first=nn;
            first->next=first;
        }
        else
        {
            node*temp=first;
            while(temp->next!=first)
            {
                temp=temp->next;
            }
            temp->next=nn;
        }
    }
    void display()
    {
        node*t=first;
        while(t->next!=first)
        {
            cout<<t->data<<endl;
            t=t->next;
        }
        cout<<t->data<<endl;
    }
    void insertatfirst(int d)
    {

        node*nn= new node(d,first);
        node*temp=first;
        if(first==NULL)
        {
            first=nn;
            first->next=first;
        }
        while(temp->next!=first)
        {
            temp=temp->next;
        }
        temp->next=nn;
        first=nn;

    }
};
int main()
{
    imple a;
    a.insertt(1);
    a.insertt(2);
    a.insertt(3);
    a.insertt(4);
    a.insertt(5);
    a.insertatfirst(6);
    a.insertatfirst(7);
    a.insertatfirst(8);
    a.insertatfirst(9);
    a.insertatfirst(10);
    a.display();

}
