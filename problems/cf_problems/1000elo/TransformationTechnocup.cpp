#include <iostream>
#include <vector>
using namespace std;
//Complexity: O(log(b))

int main(){
    int a, b;
    cin >> a >> b;
    vector<int> v;
    v.push_back(b);
    while(b%2  == 0 ||  (b - 1)%10==0 ){
        if(b <=a)
            break;
    else if(b%2 == 0){
        b /= 2;
        v.push_back(b);
    }
    else if((b - 1)%10 == 0){
        b -= 1;
        b /= 10;
        v.push_back(b);
    }
    }
    if(b != a){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    cout << v.size() << "\n";
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }
        return 0;
}