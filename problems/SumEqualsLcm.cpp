#include <iostream> 
#include <vector>
#include <cstdint>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c = 0;
        for (int i = 2; i * i <= n; i++)
        {

            while (n % i == 0)
            {
                c == 0 ? c++ : 0;
                n /= i;
               
            }
           
   
      }
      c += (n > 1);
      cout <<(c>1  ?"Yes\n":"No\n");

    }
    return 0;
}