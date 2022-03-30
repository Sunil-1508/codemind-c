#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n,c=0,l=0;
    cin>>n;
    while(n!=0)
    {
        s.insert(n%10);
        n/=10;
        c++;
    }
l=s.size();
if(c==l) cout<<"Unique Number";
else cout<<"Not Unique Number";
}