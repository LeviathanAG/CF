#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    int a[100][3];
    int xs=0,ys=0,zs=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0];
        cin>>a[i][1];
        cin>>a[i][2];

    }
    for(int i=0;i<n;i++)
    {
        xs+=a[i][0];
        ys+=a[i][1];
        zs+=a[i][2];
    }
    if(xs==0&&ys==0&&zs==0)
    cout<<"YES";
    else cout<<"NO";

    return 0;
}