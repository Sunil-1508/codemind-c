#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int c=0,s=0;
    getline(cin,a);
    getline(cin,b);
    if(a.length()!=b.length())
    {
        c=1;
    }
    for(int i=0;i<a.length();i++)
    {
        for(int j=0;j<b.length();j++)
        {
            if(a[i]==b[i]) 
            {
              b[j]='1'; 
              s++;
                break;
            }
        }
    }
    if(s==a.length()||c==0) cout<<"True";
    else cout<<"False";
}
