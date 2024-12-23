#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y = 0;
    int x;
    string s;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> s;
        if (s[1] == '+')
        {
            y++;
        }
        else y--;
    }
    cout<<y;
}