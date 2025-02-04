#include <iostream>
#include <vector>
using namespace std;
#define int long long
    int k[10 + 1][10 + 1];
    //Complexity: O(nr)
int  GenerateBinomial(int n , int r){
    k[1][0] = 1, k[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        k[i][0] = 1;
        for (int j = 2; j <= r; j++) {
            k[i][j] = k[i - 1][j] + k[i - 1][j - 1];
        }
    }
    return k[n][r];
}
}