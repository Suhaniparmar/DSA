
#include<iostream>
using namespace std;
void insertionsort(int n,int arr[])
{
     for(int i=1;i<n;i++)
     {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp )
            {
                //shift
                arr[j+1]=arr[j];
            }
            else
            {
                //rukk jao
                break;
            }
        }
        arr[j+1]=temp;
     }
   for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";

    }cout<<endl;
}
int main()
{
    int arr[5]={1,7,2,5,6};
     for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";

    }cout<<endl;
    insertionsort(5, arr);
    return 0;
}
