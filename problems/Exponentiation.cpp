#include <iostream>
using namespace std;
#include <cstdint>
#define int long long
int ModularBinaryExponentiation(int a, int b, int m) {
    int ans = 1;
    while (b) {
        if (b & 1) {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return ans;
}
int32_t main() {
    int t;
    cin >> t;
    while (t--)
    {
      
    int a, b;
    cin >> a >> b;
    const int m = 1e9 + 7;
    cout << ModularBinaryExponentiation(a, b, m) << "\n";
    }
    
    
    return 0;
}