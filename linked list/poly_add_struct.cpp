#include<iostream>
using namespace std;

struct poly
{
    int coeff;
    int expo;
};
int add(poly p1[10],poly p2[10],poly p3[10],int t1,int t2)
{
    int i,j,k;
    int t3;
    i=j=k=0;
    while(i<t1 && j<t2)
    {
        if(p1[i].expo==p2[j].expo)
        {
            p3[k].coeff=p1[i].coeff+p2[j].coeff;
            p3[k].expo=p1[i].expo;
            i++;
            j++;
            k++;
        }
        else if(p1[i].expo>p2[j].expo)
        {
            p3[k].coeff=p1[i].coeff;
            p3[k].expo=p1[i].expo;
            i++;
            k++;
        }
        else
        {
            p3[k].coeff=p2[j].coeff;
            p3[k].expo=p2[j].expo;
            j++;
            k++;
        }
    }
    while(i<t1)
    {
        p3[k].coeff=p1[i].coeff;
        p3[k].expo=p1[i].expo;
        i++;
        k++;
    }
    while(j<t2)
    {
        p3[k].coeff=p2[j].coeff;
        p3[k].expo=p2[j].expo;
        j++;
        k++;
    }
    t3=k;
    return t3;
}
int main()
{
    struct poly p1[10];
    struct poly p2[10];
    struct poly p3[10];
    int t1,t2;
    cout<<"enter the no. of term for 1st polynomial"<<endl;
    cin>>t1;
    cout<<"enter the no. of term for 2nd polynomial"<<endl;
    cin>>t2;
    for(int i=0;i<t1;i++)
    {
        cout<<"enter "<<i<<"th term of 1st polynomial"<<endl;
        cin>>p1[i].coeff;
        cin>>p1[i].expo;
    }
     for(int i=0;i<t2;i++)
    {
         cout<<"enter "<<i<<"th term of 2nd polynomial"<<endl;
        cin>>p2[i].coeff;
        cin>>p2[i].expo;
    }
    cout<<"addition of both polynomial "<<endl;
    for(int i=0;i<add(p1,p2,p3,t1,t2);i++)
    {

        cout<<p3[i].coeff<<"x^"<<p3[i].expo<<" ";
    }
}

