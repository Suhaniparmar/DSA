#include<iostream>
using namespace std;

int smerge(int a[],int l,int m,int n)
{
    int i=l;
    int j=m+1;
    int result[n-l+1];
    int k=0;
    while(i<=m && j<=n)
    {
        if(a[i]>a[j])
        {
            result[k]=a[j];
            k++; j++;
        }
        else
        {
            result[k]=a[i];
            i++;  k++;
        }
    }
    while(i<=m)
    {
        result[k]=a[i];
        k++;  i++;
    }
    while(j<=n)
    {
        result[k]=a[j];
        k++;  j++;
    }
    for(int i=0;i<=n;i++)
    {
        a[i]=result[i];
    }

}
int main()
{
    int a[]={10,20,30,15,18,25,35,45,65}; //merge of 2 sorted array [10,20,30]&[15,18,25,35,45,65]
                                          //l=index of 1st ele of 1st array
                                          //m=index of
    smerge(a,0,2,8);
    for(int i=0;i<=8;i++)
    {
        cout<<a[i]<<" ";
    }


}
