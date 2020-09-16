#include<iostream>
using namespace std;
int binary_search(int a[],int n,int val);
int main()
{
    int a[100],n,val;
    cout<<"enter the number of elements  :"<<endl;
    cin>>n;
    cout<<"enter the elements in an array :"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<"enter the digit you want to search :"<<endl;
        cin>>val;
    binary_search(a,n,val);
    return 0;
}
int binary_search(int a[],int n,int val)
{
    int lower,higher,mid,result;
    lower=0;
    higher=n-1;

    while(lower<=higher)
    {

        mid=(lower+higher)/2;

        if(a[mid]==val)
        {
            cout<<"Found at position : "<<mid+1;
            return 0;
        }
        else if(a[mid]>val)

            higher=mid-1;

        else
           lower=mid+1;
    }
    cout<<"data not found";
}
