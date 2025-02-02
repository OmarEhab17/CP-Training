#include <iostream>
#include <array>
using namespace std;
//Complexity: O(log(min(a,b))) 
array<int, 3> euclideanGCD(int a, int b) {
    if (!a) return {b, 0, 1};
    int k = b / a;
   auto [g, x, y] = euclideanGCD(b -k*a, a);
   return {g, x+k*a, y};
    

}
int main() {
    int a, b;
    cin >> a >> b;
    auto [g, x, y] = euclideanGCD(a, b);
    cout << g << " " << x << " " << y << "\n";
    return 0;
}