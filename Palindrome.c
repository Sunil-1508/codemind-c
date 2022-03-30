#include<bits/stdc++.h>
using namespace std;
void palindrome(int a)
{
    int r=0;
    int t=a;
    while(a!=0)
    {
        r=r*10+a%10;
        a/=10;
    }
    if(t==r) cout<<"True";
    else cout<<"False";
}
int main()
{
    int n;
    cin>>n;
    palindrome(n);
    
}