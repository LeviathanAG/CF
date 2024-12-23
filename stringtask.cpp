#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s2="";
    int n=s.size();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='Y'&&s[i]!='y')
        {
            if(s[i]>=65&&s[i]<=90)
            {
                s2+=s[i]+32;
            }
            else s2+=s[i];
        }}
        
    for(int i=0;i<s2.size();i++)
    {
        cout<<".";
        cout<<s2[i];
    }
    
    
    }