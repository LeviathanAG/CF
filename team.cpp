#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count=0;
    int flag=0;
    for(int i = 0; i < n; i++)
    {
        int flag=0;
        int a[3];
        for(int j=0;j<3;j++)
        {
            cin>>a[j];
            if(a[j]==1)
            {
                flag++;
            }


        }
        if(flag>=2)
        {
            count++;
        }
        


    }
    cout<<count;
}
