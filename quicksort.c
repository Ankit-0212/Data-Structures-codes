#include<stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int a[], int l, int e)
{
    int pivot = a[e];    // pivot
    int i = (l - 1);

    for (int j = l; j <= e- 1; j++)
    {
        // If current element is smaller than the pivot
        if (a[j] < pivot)
        {
            i++;    // increment pos of smaller element
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[e]);
    return (i + 1);
}
void quicksort(int a[],int l,int e)
{
    if( l < e )
    {
        int loc = partition(a,l,e);
        quicksort(a,l,loc-1);
        quicksort(a,loc+1,e);
    }
}

int main()
{
    
 

    int a[100],n,i;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("Array after sorting : ");
    for(i=0;i<n;i++)
        printf("[%d] ",a[i]);
    return 0;
}
