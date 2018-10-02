#include<bits/stdc++.h>


using namespace std;
int main()
{
	int n,res=0;
	cin>>n;
	int i=0;
	while(n>0)
	{

	 res=res+(n%10)*pow(2,i);
	 n/=10;
	 
	 i++;
	}
	cout<<res<<endl;
}
