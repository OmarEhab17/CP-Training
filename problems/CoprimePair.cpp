#include <iostream> 
#include <vector>
#include <cstdint>
#include <map>
using namespace std;
#define int long long
int gcd(int a , int b){
    if(!a) return b;
    return gcd(b%a,a);
}

int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    for(auto &i : v) cin >> i;
    int ans = n * (n - 1) / 2;
    for(int i = 0; i < n; i++) {
        for(int j = 2; j*j < v[i]; j++) {
            while (v[i] % j == 0)
            {
                m[j]++;
                v[i] /= j;
            }
          
            
        
    }
   
    cout << ans << "\n";
    return 0;
}