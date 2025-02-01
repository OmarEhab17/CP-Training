#include <iostream>
#include <vector>
using namespace std;

    constexpr int N = 1e7 + 1;
    vector<int> p;
    int spf[N] , phi[N];

    void linearSieve() {
        spf[1] = 1;
        for (int i = 2; i < N; i++) {
            if (!spf[i]) {
                p.push_back(i);
                spf[i] = i;
                phi[i] = i - 1;
              
            }
            for(auto& j : p)                
            {
                if (i * j >= N)
                    break;
                spf[i * j] = j;
                phi[i * j] = phi[i] * (j - (j != spf[i * j]));
                if (j % spf[i] == 0)
                    break;
            }
        }
    }

// Complexity: O(sqrt(X))
    int euler_totient(int x) {
        int ans = 1;
        for(int i = 2; i * i <= x; i++) {
            if(x % i) continue;
            ans*= i-1;
            x/= i;
        while(x % i == 0) {
                x /= i;
                ans *= i;
            }
        }
        if(x > 1) ans *= x-1;
        return ans;
    }
     //Complexity: O(Nlog(log(N)))             
    int main()
    {
        linearSieve();
        return 0;
    }   