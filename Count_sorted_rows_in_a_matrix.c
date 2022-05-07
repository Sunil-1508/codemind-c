#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,c=0,k=0,cnt=0;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
           // cout<<a[i][j];
        }
       // cout<<"
";
    }
    
    for(int i=0;i<m;i++)
    {   c=0;
        k=0;
        for(int j=0;j<n-1;j++)
        {
          if(a[i][j]<=a[i][j+1]) c++;
          else k++;
        
         }
         if(c==n-1||k==n-1) cnt++;
    }
    cout<<cnt;
}

            