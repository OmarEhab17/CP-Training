#include <iostream>
#include <vector>
using namespace std;

    vector<int> sieve(1e6 + 1);
int countDivisors(int n) {
    return sieve[n];
}

// Complexity: O(nlog(n)) 16 1 16 2 8 4 
int main() {
    for(int i = 1; i <= 1e6; i++) {
        for(int j = i; j <= 1e6; j += i) {
            sieve[j]++;
    }
}
    int t;
    cin >> t;
    while (t--)
    {
    int n;
    cin >> n;
    cout << countDivisors(n) << "\n";
    }
    


    return 0;
}