#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>=65&&s[i]<=91)||(s[i]>=97&&s[i]<=123)||s[i]==32)
        {
            c=c;
        }
        else c+=1;
    }
    cout<<c;
}