#include<iostream>
using namespace std;

int main()
{
    int t=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<t<<" ";
           t++;
        }
        cout<<endl;
    }
}
