#include <iostream>
using namespace std;

int main()
 {
	//code
	long arr[100],n[100],b[100][100];
	int t,d[100];
	// d -> place for rotation
	// n -> number of elements
	// t -> test cases
cout<<"Enter the number of times you want to input :";

  	int k=0;
  	cin>>t;
  	while(k<t)
  	{
  	    cout<<"Enter number of elements 'n' and size of sub array 'd' \n";
  	    cin>>n[k]>>d[k];
  	    cout<<"Enter array elements :\n";
	    for(int m=0;m<n[k];m++)
	    {
	        cin>>arr[m];
  	    }
  	    for(int i=0;i<n[k];i++)
        {
            if(i<d[k])
            {

                b[k][n[k]-d[k]+i] = arr[i];
            }
            else
                b[k][i-d[k]]=arr[i];
        }
        k++;
    }
    for(int g=0;g<t;g++)
    {
        for(int h=0;h<n[g];h++)
            cout<<b[g][h]<<" ";
        cout<<endl;
    }
}




