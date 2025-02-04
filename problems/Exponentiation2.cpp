#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;
#define int long long
int BinaryExponentiation(int a, int b ,int c) {
    const int mod = 1e9 + 7;
    int ans = 1;
    int after_b = 1;
    while(c) {
        if(c & 1) {
            after_b = (b*after_b)% (mod -1);
        }
        b = (b*b) % (mod -1);
        c >>= 1;
    }
    
    while (after_b) {
        if (after_b & 1) {
            ans = (ans *a)%mod;
        }
        a = (a * a) % mod;
        after_b >>= 1;
    }
    return ans;
    
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << BinaryExponentiation(a, b, c) << "\n";
        
    }
    return 0;
}