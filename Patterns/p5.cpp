#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        int k=1;
        for(int j=5;j>=i;j--)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

