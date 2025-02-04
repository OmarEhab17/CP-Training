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
    const int upper_bound = 1e6 + 1;
    int arr[upper_bound] = {0};
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    for(auto &i : v) cin >> i;
    int ans = n * (n - 1) / 2;
  for(int i = 2; i < upper_bound; i++){
    if(arr[i]) continue;
    for(int j = i; j < upper_bound; j += i){
        arr[j]++;
    }
   
    cout << ans << "\n";
    return 0;
}