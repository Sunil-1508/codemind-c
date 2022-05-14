#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c1=0,c2=0;
    cin>>n;
    int a[n],m[32767];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
        if(m[a[i]]==1)
        {
            cout<<a[i]<<" ";
        }
        
    }
    
}