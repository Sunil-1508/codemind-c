#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,r=0;
    cin>>a;
    int t=a;
    while(a!=0)
    {
        r=r+a%10;
        a/=10;
    }
    if(t%r==0) cout<<"True";
    else cout<<"False";
}