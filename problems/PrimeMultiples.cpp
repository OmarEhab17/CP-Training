#include <iostream>
#include <vector>
#include <cstdint>  
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v(k);
    for(auto &i : v) cin >> i;
    int ans = 0;
    for (int mask = 1; mask < (1 << k); mask++) {
        int prod = 1;
        bool flag = true;
        for (int i = 0; i < k; i++)
        {
            if (mask & (1 << i)) {
                if( v[i] > n/prod){
                    flag = false;
                    break;
                }
                prod *= v[i];
               
            }
           
        }
        if(!flag) continue;
        if(__builtin_popcount(mask) %2)
            ans += n / prod;
        else
            ans -= n / prod;
     }
            cout << ans << "\n";
        return 0;
}