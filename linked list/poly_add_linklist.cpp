#include<iostream>
using namespace std;
class polynomial;
class term
{
    friend class polynomial;
    int coeff;
    int expo;
    term *next;
public:
    term(int c,int e)
    {
        coeff=c;
        expo=e;
        next=NULL;
    }
};
class polynomial
{
    term * first;
public:
    polynomial()
    {
        first=NULL;
    }
    void insertnew(int c,int e)
    {
        term*nn=new term(c,e);
        if(first==NULL)
        {
            first=nn;
        }
        else
        {
            term *temp=first;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=nn;
        }
    }

    void display()
    {
        term*temp=first;
        while(temp!=NULL)
        {
            cout<<temp->coeff<<"x^"<<temp->expo<<' ';
            temp=temp->next;
        }
    }
    term *return_first()
    {
        return first;
    }
    term* polynomialadd(term * one,term* two)
    {

        polynomial result;
        while(one!=NULL && two!=NULL)
        {
            if(one->expo==two->expo)
            {
                result.insertnew(one->coeff+two->coeff,one->expo);
                one=one->next;
                two=two->next;
            }
            if(one->expo>two->expo)
            {
                result.insertnew(one->coeff,one->expo);
                one=one->next;
            }
            else
            {
                result.insertnew(two->coeff,two->expo);
                two=two->next;
            }
        }
        while(one!=NULL)
        {
            result.insertnew(one->coeff,one->expo);
            one=one->next;
        }
        while(two!=NULL)
        {
            result.insertnew(two->coeff,two->expo);
            two=two->next;
        }
        result.display();
    }
};


main()
{
    polynomial p1,p2;
    p1.insertnew(3,6);
    p1.insertnew(2,3);
    p2.insertnew(3,6);
    p2.insertnew(2,1);
    term*t1=p1.return_first();
    term*t2=p2.return_first();
    polynomial p3;
    p3.polynomialadd(t1,t2);
}
