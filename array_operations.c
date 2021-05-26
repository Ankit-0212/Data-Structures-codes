#include<stdio.h>
int insert(int arr[],int n)
{
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    int ele;
    printf("Enter the element to be inputted: ");
    scanf("%d", &ele);

    int i=n-1;
    n++;
    if (pos > n)
        printf("Invalid Input.");
    else
    {
       
   
        while(i>=pos)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[pos]=ele;

   


    }
    for(i=0;i<n;i++)
    {
        printf("[%d] ",arr[i]);
    }

    return arr[n];
}
int delete(int arr[],int n)
{
    int pos,i;
    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos >= n + 1)
        printf("\nDeletion not possible.");

    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        printf("\nArray after deletion : \n");

        for (i = 0; i < n - 1; i++)
        printf("[%d] ", arr[i]);
    }
    return arr[n];
}
int search(int arr[],int n)
{
    int ele,i;
    printf("\nEnter element : ");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            printf("\nElement found at %d position\n",i+1);
        }
    }

}
void traversal(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("[%d] ",a[i]);
    }
}
int main()
{
    int arr[100],n,i,input;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array : \n");
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    printf("Please choose an option from below:\n\n");
    l1:printf("Press 1 for insertion.\nPress 2 for deletion.\nPress 3 for searching.\nPress 4 for traversal.");

    printf("\nYour input: ");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        insert(arr,n);
        break;
    case 2:
        delete (arr,n);
        break;
    case 3:
        search(arr,n);
        break;
    case 4:
         traversal(arr,n);
         break;
    default:
        printf("Give valid input: ");
        break;
    }

}
