#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,s=0;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {  
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
         
        }
     
    }
    for(int i=0;i<n;i++)
    {   s=0;
        for(int j=0;j<m;j++)
        {
         s+=a[j][i];
        }
       cout<<s<<" ";
    }
    
   
}

            