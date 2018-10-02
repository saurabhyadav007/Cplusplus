
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j,countf=0,countm;
    cin>>n;
    int hash[2][n];
    for(i=0;i<n;i++)
    {
        cin>>hash[0][i];
        if(hash[0][i]==0)
            countf++;
        cin>>hash[1][i];
    }
    countm=n-countf;
    for(i=0;i<n;i++)
    { for(j=i+1;j<n;j++)
        {if(hash[0][i]>hash[0][j])
        {swap(hash[0][i],hash[0][j]);
         swap(hash[1][i],hash[1][j]);}
        }
    }
    for(int k=0;k<n;k++)
    cout<<hash[1][k]<<" ";
    for(i=0;i<countf;i++)
    { for(j=i+1;j<countf;j++)
        {if(hash[1][i]<hash[1][j])
          swap(hash[1][i],hash[1][j]);}}
      for(i=countf-1;i<n;i++)
    { for(j=i+1;j<n;j++)
        {if(hash[1][i]<hash[1][j])
          swap(hash[1][i],hash[1][j]);}}
    for(int k=0;k<n;k++)
        cout<<hash[1][k]<<" ";

    return 0;
}

