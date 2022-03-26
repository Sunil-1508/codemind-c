#include<bits/stdc++.h>
using namespace std;
int sd(int);
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(sd(i)==1) cout<<i<<" ";
    }
}
int sd(int n)
{
    int c=0,d=0,r;
   int t=n;
    while(n>0)
    {
        r=n%10;
        if(r==0) return 0;
        if(t%r==0) c++;
        d++;
        n/=10;
    }
    if(c==d) return 1;
    else return 0;
}