#include<stdio.h>
void search(int a[],int n,int val)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==val)
		 {
		 	printf("Data found at %d position",i+1);
		 	flag = 1;
		 	break;
		 }
	}
	if(flag==0)
	printf("Data not found");
	
}
int main()
{
	int n,i,a[10],val;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	printf("Enter the array :\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element you want to search :");
	scanf("%d",&val);
	search(a,n,val);
}
