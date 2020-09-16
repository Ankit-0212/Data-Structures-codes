#include<stdio.h>
void traversal(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("[%d] ",a[i]);
    }
}
int main()
{	
    int arr[100],n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array : \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    traversal(arr,n);
    return 0;
}