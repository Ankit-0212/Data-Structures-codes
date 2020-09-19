#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],b[100],n1,n2,i,j,k,l,m;
    int c[200];
  


    printf("Enter the Number of Elements in 1st Array : ");
    scanf("%d",&n1);
    
    printf("Enter Array elements :\n");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);

    printf("Enter the Number of Elements in 2nd Array : ");
    scanf("%d",&n2);
    
    printf("Enter Array elements :\n");
    for(j = 0 ; j < n2 ; j++)
    scanf("%d",&b[j]);
    
    k=0,l=0;
    while(k < (n1+ n2) )
    {
        if(k<n1)
        {   
            c[k]=a[k];
        } 
        else
        {
            c[k]=b[l];
            l++;
        }
        k++;
    }


    printf("Merged Array : ");
    for(m=0;m < (n1+n2) ; m++)
    {
        printf("[%d] ",c[m]);
    }


}