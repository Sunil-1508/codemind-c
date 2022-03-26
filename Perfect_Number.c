#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s=1;
    cin>>n;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
            {
                s=s+i+n/i;
            }
            else{
                s=s+i;
            }
        }
    }
    if(n==s) cout<<"True";
    else cout<<"False";
}