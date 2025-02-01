#include <iostream>
#include <vector>
using namespace std;
#define int long long


int32_t main() {
    int a, b;
    cin >> a >> b;
        int r = b - a;
    for (int i = r; i; i--)
    {
        if ((i + b % i )<=r)
        {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}