#include<stdio.h>
int Delete(int n,int arr[],int del)
{
    int i,j;
    for(i=0;i< n;i++)
    {
        if(arr[i]== del)
        break;
    }
    if(i==n)
    {
        printf("Data not found");
        return 1;
    }
    else
    {
        
        for(j=i;j<n;j++)
        
        arr[j]=arr[j+1];
        
        n--;
        return arr[n];
    }

}
int main()
{
    int n;
    int arr[100],i,j,del;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(i=0;i<  n ;i++)
    {
        scanf("%d",&arr[i]);
    }	
    printf("Enter the element to delete : ");
    scanf("%d",&del);
 
    if(Delete(n,arr,del)!=1)
    {
        printf("New array :");
        n--;
        for(i=0;i<n;i++)
        {
            printf("[%d] ",arr[i]);
        }
    }
    else
    {
         
        printf("\nNo deletion \nArray is :");
       
        for(i=0;i<n;i++)
        {
            printf("[%d] ",arr[i]);
        }
  
    }
    
    return 0;
}