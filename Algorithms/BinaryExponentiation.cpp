#include <iostream>
using namespace std;
//Complexity: O(log(n))
int binaryExponentiation(int a, int b) {
    int ans = 1;
    while(b) {
        if(b & 1) {
            ans *= a;
        }
        a *= a;
        b >>= 1;
    }
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;      
    cout << binaryExponentiation(a, b) << "\n";
    return 0;
}