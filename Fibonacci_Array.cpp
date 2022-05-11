#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=1;i<n;i++)
    cin>>a[i];
    for(int i=3;i<n;i++)
    {  
        if(a[i]==a[i-1]+a[i-2]) c++;
        else{ c=0; break;}
    }
    if(c!=0) cout<<"yes";
    else cout<<"no";
}
