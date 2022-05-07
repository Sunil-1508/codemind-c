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
          //  cout<<a[i][j];
        }
      // cout<<"
";
    }
    
    for(int i=0;i<n;i++)
    {   c=0;
        k=0;
        for(int j=0;j<m-1;j++)
        {
          if(a[j][i]<a[j+1][i]) c++;
          else if(a[j][i]==a[j+1][i]) { c++; k++;}
         else k++;
        
         }
         if(c==m-1||k==m-1) cnt++;
    }
    cout<<cnt;
}

            