#include<iostream>
using namespace std;
int missing_number(int a[],int n)
{
    int total=0;
    total=n*(n+1)/2;
    for(int i=0;i<n-1;i++)
    {
      total-=a[i];
    }
    return total;
}
int main()
{

    int a[100],n,i;
    cout<<"enter maximum number :";
    cin>>n;
    cout<<"enter "<<n-1<<" elements from 1 to "<<n<<":\n";
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    cout<<"missing number is "<<missing_number(a,n);
}
