#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void descendingSort(vector<int> &v) {
    sort(v.begin(), v.end(), greater<int>());
}
//Complexity: O(nlog(n)) can be solved in O(n) but this was less time-consuming to write
int main() {
    int t;
    cin >> t;
    while(t--) {
        
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    vector<int> sorted_v = v;
    set<int> s(v.begin(), v.end());
    descendingSort(sorted_v);
    if(v == sorted_v &&  v.size() == s.size() && v.size()>1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
    }
    return 0;
}