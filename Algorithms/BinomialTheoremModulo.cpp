#include <iostream>
using namespace std;
#define int long long
constexpr int  N = 1e6 + 1;
constexpr int mod = 1e9 + 7;
int  F[N] = {1} , fi[N];
// Complexity : O(N)
int fpow(int x , int p){
    int r = 1;
    while(p){
        if(p &1)
            r = r * x % mod;
            x = x * x % mod;
            p >>= 1;
        }
    }
int comb(int n , int r) {
    return F[n] * fi[n - r] % mod * fi[r] % mod;
}
int main(){
    for (int i = 1; i < N; ++i){
        F[i] = i * F[i - 1] % mod;
    }
    fi[N - 1] = fpow(F[N - 1], mod - 2);
    for (int i = N-1; i ;--i){
        fi[i - 1] = fi[i] * i % mod;
    }
    }
    

