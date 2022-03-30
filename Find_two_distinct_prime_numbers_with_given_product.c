#include<bits/stdc++.h>
using namespace std;
int is_prime(int a){
     int i;
     if(a==1) return 1;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0) {return 1; break;}
    }
    return 0;
}
int main()
{
    int i,a,c=0;
        cin>>a;
         for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0){
            if(i!=a/i){
                if(is_prime(i)==0&&is_prime(a/i)==0){ cout<<i<<" "<<a/i; c=1;}
            }
            else {
                
                if(is_prime(i)==0) {cout<<i<<" "<<i; c=1;}
            }
        }
    }
    if(c==0) cout<<-1;
    
}