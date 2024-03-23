
#include<iostream>
using namespace std;

void Merge(int a[],int l,int m,int n)
{
	int result[n-l+1];
	int i=l,j=m+1,k=0;
	while(i<=m && j<=n)
	{
		if(a[i]<a[j])
			result[k++]=a[i++];
		else
			result[k++]=a[j++];
	}
	while(i<=m)
		result[k++]=a[i++];

	while(j<=n)
		result[k++]=a[j++];

	for(int i=l;i<=n;i++)
		a[i]=result[i-l];
}


void MergeSort(int a[],int l,int n)
{
	if(l<n)
	{
		int mid=(l+n)/2;
		//cout<<"l="<<l<<" r="<<n<<" mid="<<mid<<endl;
		MergeSort(a,l,mid);
		MergeSort(a,mid+1,n);
		Merge(a,l,mid,n);
	}
}

int main()
{
	int size=8;
	int a[]={42,57,68,77,7,15,29,35};
	MergeSort(a,0,size-1);
	for(int i=0;i<size;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
