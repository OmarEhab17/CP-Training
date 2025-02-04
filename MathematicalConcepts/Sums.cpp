// Triangular Sum Complexity O(1)
 int sum = (n * (n + 1)) / 2;
 // Geometric Sum Complexity O(logn)
 int BinaryExponentiation(int x, int n) {
     int ans = 1;
     while (n) {
         if (n & 1) {
             ans *= x;
         }
         x *= x;
         n >>= 1;
     }
     return ans;
 }
 int s = (BinaryExponentiation(x,n+1) - 1) / (x - 1);