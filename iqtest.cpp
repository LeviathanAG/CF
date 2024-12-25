#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[100];
   int cnte=0;
   int cnteo=0;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    if(a[i]%2==0)
    {
        cnte++;

    }
    else cnteo++;
   }
   if(cnte>cnteo)
   {
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<i+1;
            break;
        }
    }
   }
   else {
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<i+1;
        }
    }
   }
  
   
    }
   
