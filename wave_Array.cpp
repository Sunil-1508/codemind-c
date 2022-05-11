#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n-2;i++)
    {  
        if(a[i]<a[i+1]&&a[i+1]>a[i+2]){ c++;  }
        else if(a[i]>a[i+1]&&a[i+1]<a[i+2]){ c++;  }
        else { c=0;  break; }
        i++;
    }
    if(c!=0) cout<<"yes";
    else cout<<"no";
}
