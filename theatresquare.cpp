#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long int n,m,a;
    cin >> n >> m >> a;
    
    
    unsigned long int tiles_length = (n + a - 1) / a;  
    unsigned long int tiles_width = (m + a - 1) / a;   
    
    
    unsigned long int total_tiles = tiles_length * tiles_width;
    
    cout << total_tiles << endl;
    
    return 0;
}