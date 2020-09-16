#include<stdio.h>

int insert(int arr[],int size,int element,int pos)
{
    int i=size-1;
    if(size>100)
    {
        return 0;
    }
    else
    {
        while(i>=pos)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[pos]=element;

    }
    return arr[size];
}
int main()
{
    int a[100],size,element,pos;
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements of array :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }

    printf("Enter number you want to insert :");
    scanf("%d",&element);
    printf("Enter the position of element :");
    scanf("%d",&pos);
    insert(a,size,element,pos-1);
    for(int j=0;j<=size;j++)
    {
        printf("[%d] ",a[j]);
    }

}
