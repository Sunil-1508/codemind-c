#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=1;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i!=i) s+=i+(n/i);
            else s+=i;
        }
    }
    if(s>n) cout<<"True";
    else cout<<"False";
}