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
        }}
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
         if(i==0||i==m-1||j==0||j==n-1){
         s+=a[i][j];
        
         }
        }
    }
    
    cout<<s;

            
}