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
     int n,m,c=0;
    cin>>m>>n;
   for(int i=m;i<=n;i++)
   {
     if(is_prime(i)==0) c++; 
   }
    cout<<c;
}
