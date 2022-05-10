#include<bits/stdc++.h>
using namespace std;
int is_prime(int a){
     int i;
     if(a<2) return 1;
     if(a==2) return 0;
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
   for(int i=1;i*i<=n;i++)
   {
       if(n%i==0)
       {
           if(n/i!=i)
           {
               if(is_prime(i)==1) c++;
               if(is_prime(n/i)==1) c++;
           }
           else {
               if(is_prime(i)==1) c++;
           }
       }
   }
    cout<<c;
}
