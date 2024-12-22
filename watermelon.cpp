#include<bits/stdc++.h>
using namespace std;
bool watermelon(int w)
{
    //get all the divisions possible by multiples of 2.
    if(w%2==0&&w>2)
    {
        return true;
    }
    return false;

}

int main()
{
    int w;
    cin>>w;
    bool flag=watermelon(w);
    if(flag==true)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}