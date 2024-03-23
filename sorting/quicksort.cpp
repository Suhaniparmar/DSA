//quick sort
#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivert=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivert)
        {
            cnt++;
        }
    }
    //right pivert at right place
    int pivertindex=s+cnt;
    swap(arr[pivertindex],arr[s]);

    //manage right and left place
    int i=s,j=e;
    while(i<pivertindex && j>pivertindex)
    {
            while(arr[i]<pivert)
            {
                i++;
            }
            while(arr[j]>pivert)
            {
                j--;
            }
            if(i<pivertindex && j>pivertindex)
            {
                swap(arr[i++],arr[j--]);
            }
    }
    return pivertindex;
}
void quicksort(int arr[],int s,int e)
{
    //base case
    if(s>=e)//0 element hoy ke 1 element hoy to bhi sorted
    return;
    //partition
    int p=partition(arr,s,e);

    //left part sor
    quicksort(arr,s,p-1);//recursive call
    //right part sort
    quicksort(arr,p+1,e);
}
int main()
{
    int arr[5]={2,4,1,6,0};
    //int arr[11]={2,4,1,6,99,9,9,9,9};
    int n=5;
    //int n=11;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}
