//time complexity BIG O(n*n)
#include<iostream>

using namespace std;
int selectionsort(int a[],int n)
{
	int min,temp,i,j;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				temp=a[j];
				a[j]=a[min];
				a[min]=temp;
			}
		}
	}
	return a[n];
}
int main()
{
	int a[100],n,i,j;
	cout<<"enter the number of elements :";
	cin>>n;
	cout<<"enter the elements :\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selectionsort(a,n);
	cout<<"array after sorting :";
	for(int j=0;j<n;j++)
	cout<<"["<<a[j]<<"] ";
}
