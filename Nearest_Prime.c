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
    int n,i,j,l,r,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1) cout<<"2
";
        else if(is_prime(a)==0) cout<<a<<"
";
        else{
        for(j=a+1;j>0;j++){
        if(is_prime(j)==0){ r=j;  break;}}
        for(j=a-1;j>0;j--){
        if(is_prime(j)==0){ l=j;  break;}}
        int adl=a-l;
        int adr=r-a;
        if(adr>adl) cout<<l<<"
";
        else if(adr==adl) cout<<l<<"
";
        else cout<<r<<"
";}
    }
}