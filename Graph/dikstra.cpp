//dikstra's all pair shortest path
#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={{0,4,11},{6,0,2},{3,999,0}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if((a[j][i]+a[i][k])<a[j][k])
                {
                   a[j][k]=a[j][i]+a[i][k];
                }
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

