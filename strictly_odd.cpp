#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c1=0,c2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            if(i%2!=0)
            {
                c2++;
            }
            c1++;
        }
    }
    if(c1==c2) cout<<"True";
    else cout<<"False";
}
