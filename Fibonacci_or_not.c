#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1,c=0,t;
    if(n==0||n==1){ cout<<"True"; c=1;}
    for(int i=0;a<=n;i++)
    {
        a=a+b;
        if(a==n){ cout<<"True"; c=1; break;}
       t=a;
       a=b;
       b=t;
    }
    if(c==0) cout<<"False";
}