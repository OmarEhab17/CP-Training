#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Complexity O(N)
    vector<int> sieve(1e6 + 1);
    int main() {
   
   
        int n;
        cin >> n;
        constexpr int N = 1e6 + 1;
        vector<int> f(N);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            f[x]++;
        }
        for(int i = N-1; i ; i--) {
            int c = 0;
            for(int j = i; j < N; j += i) {
                c += f[j];
            }
            if(c>1) {
                cout << i << "\n";
                return 0;
            }
        }
                return 0;
}