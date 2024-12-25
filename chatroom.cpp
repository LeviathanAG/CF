#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool falg=false;
    string s;
    cin>>s;
    string s2="hello";
    string s3="";
    for(int i=0,g=0;i<s.size();i++)
    {
        if(s2[g]==s[i])
        {
            s3+=s2[g];
            g++;
            

        }
    }
   if ((s2.compare(s3)) == 0)
   {
    cout<<"YES";

   }
   else cout<<"NO";
    
    
    }