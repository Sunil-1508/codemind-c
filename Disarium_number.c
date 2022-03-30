#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    int t=n;
    int d=log10(n)+1;
    int i=0;
  while(n!=0){
      s+=pow((n%10),(d-i));
      i++;
      n/=10;
   }
    if(s==t) cout<<"True";
    else cout<<"False";
}