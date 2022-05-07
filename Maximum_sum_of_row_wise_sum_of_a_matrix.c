#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,s=0,max=0;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {   s=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
         s+=a[i][j];
        }
       if(max<s) max=s;
    }
   cout<<max;
}

            