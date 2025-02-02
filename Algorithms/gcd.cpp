#include <iostream>
using namespace std;
//Complexity: O(log(min(a,b)))
int gcd(int a, int b) {
    if (!a)
        return b;
    return gcd(b %a, a);
}