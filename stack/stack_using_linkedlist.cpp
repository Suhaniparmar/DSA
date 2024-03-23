
#include<iostream>
using namespace std;
class stackk;
class stacknode
{
    friend class stackk;
    int data;
    stacknode*link;
public:
    stacknode(int d,stacknode*top)
    {
        data=d;
        link=top;
    }
};
class stackk
{
    stacknode*top;
public:
    stackk(){top=NULL;}
    int push(int d)
    {
        top=new stacknode(d,top);
    }
    int pop()
    {
        if(top==NULL)
        {
            return 0;
        }
        else
        {
            int x=top->data;
            top=top->link;
            return x;
        }
    }
    void display()
    {
       while(top!=0)
       {
            cout<<top->data<<endl;
        top=top->link;
       }
    }
};
main()
{
    stackk s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.display();
}
