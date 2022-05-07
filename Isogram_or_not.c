#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0;
    getline(cin,s);
    int m[123]={0};
   int l=s.length();
   int k=0;
        for(int j=0;j<l;j++)
        {  
           m[s[j]]+=1;
           if(m[s[j]]>1){ k=1; break;}
    }
    if(k==0) cout<<"True";
    else cout<<"False";
 
    
}