#include<bits/stdc++.h>
using namespace std;
int is_prime(int a){
     int i;
     if(a<2) return 1;
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0) {return 1;}
    }
    return 0;
}
int main()
{
     int n,k,c=0;
    cin>>n;
   int a[n];
    for(int i=0;i<n;i++)
    { cin>>a[i];
    }
    cin>>k;
     for(int i=0;i<n;i++)
    {
     if(a[i]>=k){
       if(is_prime(a[i])==0)
       {
         c++;
      }
       }
    }
    cout<<c;
}
