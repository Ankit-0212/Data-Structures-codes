#include<stdio.h>
int main()
{
    int arr[10];
    int i,j,temp,n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter elements below :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 &&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

    }
    for(i=0;i<n;i++)
    {
        printf("[%d] ",arr[i]);
    }
}

