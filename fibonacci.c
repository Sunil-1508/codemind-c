#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1,t;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++)
    {
        a=a+b;
       cout<<a<<" ";
       t=a;
       a=b;
       b=t;
    }
}