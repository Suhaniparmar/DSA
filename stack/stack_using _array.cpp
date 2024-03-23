#include<iostream>
using namespace std;
 static int cnt=0;
class stackk
{
    enum{n=2};
    int st[n];
    int top;
public:
    stackk(){top=0;}

    void push(int d)
    {
        st[++top]=d;
        cnt++;
    }
    int pop()
    {
        return st[top--];
        cnt--;
    }
    int isempty()
    {
        if(top==0)
            return 1;
        else
            return 0;
    }
    int isfull()
    {
        if(top>=n-1)
            return 1;
        else
            return 0;
    }
    void display()
    {
        if(top==0)
        {
            return;
        }
        for(int i=cnt;i>0;i--)
        {
            cout<<st[i]<<endl;
        }
    }
};
main()
{
    stackk s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();
    s.pop();
    s.display();
    if(s.isempty())
    {
        cout<<"empty stack"<<endl;
    }
     if(s.isfull())
    {
        cout<<"full stack"<<endl;
    }
}

