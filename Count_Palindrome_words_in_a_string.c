#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s,int n,int m)
{   
   // int l=s.length();
   //cout<<n<<"@"<<m<<" ";
   int k=0;
    for(int i=n;i<m;i++)
    {    // cout<<s[i];
        if(s[i]<97) s[i]=(char)tolower(s[i]);
        if(s[m-i]<97) s[m-i]=(char)tolower(s[m-i]);
        if(s[i]!=s[m-k-1])  return false;
        k++;
     
    }
   // cout<<"
";
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    int k=0,cnt=0,i;
   for( i=0;i<s.length();i++)
   {
       if(s[i]==' ')
       {
           if(palindrome(s,k,i)) cnt++;
           k=i+1;
       }
   }
   if(palindrome(s,k,i)) cnt++;
   cout<<cnt;
}