#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v) {
        cin >> i;
    }

    int mx = 0;
    int ans = 0;
    for(int i = 2; i <=1000; i++) {
        int c = 0;
        for(auto &j : v) {
            if(j % i == 0) {
                c++;
            }
        }
        if (c > mx) {
            mx = c;
            ans = i;
    
         
        }
    }
    cout << ans << "\n";
        


    return 0;
}