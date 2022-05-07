#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,s=0;
    cin>>m>>n;
    int a[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }}
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
         if(i==j){
         s+=a[i][j]+a[i][n-i-1];
        
         }
        }
    }
    if(n%2==0)
    cout<<s;
   else 
   cout<<s-a[m/2][n/2];
            
}