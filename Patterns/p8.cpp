#include<iostream>
using namespace std;

int main()
{
    int n=4;
   for(int i=0;i<n;i++)
   {
       for(int j=1;j<=n-i-1;j++)
       {
           cout<<" ";
       }
       for(int k=1;k<=((2*i)+1);k++)
       {
           cout<<"*";
       }
       for(int j=1;j<=n-i-1;j++)
       {
           cout<<" ";
       }
       cout<<endl;
   }
   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<i;j++)
       {
           cout<<" ";
       }
       for(int k=0;k<((2*(n-i-1))+1);k++)
       {
           cout<<"*";
       }
       for(int j=0;j<i;j++)
       {
           cout<<" ";
       }
       cout<<endl;
   }
}
