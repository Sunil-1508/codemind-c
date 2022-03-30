#include<bits/stdc++.h>
using namespace std;
int sum(int);
int sum(int a)
{
	int s=0;
	while(a>0)
	{
		s+=((a%10)*(a%10));
		a/=10;
	}
	return s;
}
int main()
{
	int n,k=0;
	cin>>n;
	if(n<10) n=n*n;
	while(n>=10){
		k=0;
		k=k+sum(n);
		n=k;
	}
//	cout<<k;
	if(k==1||k==7) cout<<"True";
	else cout<<"False";
}