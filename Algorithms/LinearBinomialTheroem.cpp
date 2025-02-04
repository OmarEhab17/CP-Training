#include <iostream>
#include <vector>
using namespace std;
#define int long long
#include  <cstdint>
//Complexity: O(nr)
int factorial[21]{1};
int GenerateBinomialinLinear(int n , int r){
    for(int i = 2; i <= n; i++){
        factorial[i] = factorial[i-1] * i;
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            cout << factorial[i] / (factorial[j] * factorial[i - j]) << " ";        
    
}
}   