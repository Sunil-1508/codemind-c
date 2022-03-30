#include<bits/stdc++.h>
using namespace std;
int reverse(int a)
{ int r=0;
    while(a!=0)
    {
        r=(r*10)+(a%10);
        a/=10;
    }
    return r;
}
int main()
{
    int n,rn,s,rs,t;
    cin>>n;
    s=(n)*(n);
    rn=reverse(n);
    rs=(rn)*(rn);
    if(s==reverse(rs)) cout<<"True";
    else cout<<"False";
}