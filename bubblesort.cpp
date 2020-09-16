#include<iostream>
using namespace std;
int bubblesort(int a[],int n)
{
	int i ,j,temp;
	for(i=0;i<n-1;i++)
	{
		int flag=0;
		for(j=0;j<n-1-i;j++)
		{
		
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			flag=1;
		}
	}
	if(flag==0)
	break;
	}
	for(int k=0;k<n;k++)
	{cout<<"["<<a[k]<<"] ";
	}
}
int main()
{
	int a[100],n,k;
	cin>>n;
	for(k=0;k<n;k++)
	{
		cin>>a[k];
	}
    bubblesort(a,n);
   
}
