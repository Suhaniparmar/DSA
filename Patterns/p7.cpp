
#include<iostream>
using namespace std;

int main()
{
    int n=4;
   for(int i=n-1;i<1;i--)
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
}
