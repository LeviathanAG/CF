#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
int max=0;
int arr[10];
arr[0]=a*b*c;
arr[1]= a*b+c;
arr[2] =a+b+c;
arr[3] =(a+b)*c;
arr[4] =a*(b+c);
arr[5] =a+b*c;
for(int i=0;i<6;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
}
cout<<max;
    
    
}