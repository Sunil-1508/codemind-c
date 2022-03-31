#include<bits/stdc++.h>
using namespace std;
int is_prime(int n)
{ if(n<=1) return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }
     return 1;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
   for(int i=n1;i<=n2;i++)
   {
       
       if(is_prime(i)==1) cout<<i<<"
";
   }
}