#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,r=0;
    cin>>a;
    while(a!=0)
    {
        if(a%10>r) r=a%10;
        a/=10;
    }
    cout<<r;
}