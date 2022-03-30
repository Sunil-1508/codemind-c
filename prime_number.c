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
    int n,i,s,c=0;
    cin>>n;
    if(is_prime(n)==1){cout<<"not a prime"; c++;}
    if(c==0) cout<<"prime";

}