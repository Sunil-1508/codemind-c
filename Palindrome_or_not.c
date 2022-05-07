#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{   
    int l=s.length();
    for(int i=0;i<=(l/2)+1;i++)
    {   if(s[i]<97) s[i]=(char)tolower(s[i]);
        if(s[l-i]<97) s[l-i]=(char)tolower(s[l-i]);
        if(s[i]!=s[l-i-1])  return false;
    }
    return true;
}
int main()
{
    string s;
    getline(cin,s);
   if(palindrome(s)) cout<<"True";
   else cout<<"False";
}