#include<bits/stdc++.h>
using namespace std;
int main() {
    uint64_t n, k;
    cin >> n >> k;
    
    
    if(k <= (n + 1) / 2) {
        cout << (2 * k - 1);  
    } else {
        
        k = k - (n + 1) / 2;
        cout << (2 * k);      
    }
    return 0;
}
