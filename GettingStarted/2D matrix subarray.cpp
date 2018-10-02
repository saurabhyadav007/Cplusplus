#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,i,j,max=0;
	cin>>m>>n;
	int arr[m][n];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>arr[i][j];
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	  {
	  	int sum=0;
	  	for(int k=i;k<m;k++)
	  		{
	  		   for(int l=j;l<n;l++)
	  		     {
	  		   	    sum=sum+arr[k][l];
	  		   	    if(sum>max)
	  		   	    max=sum;
				 }
		    }
	  }
		
	}
	cout<<max;
}
