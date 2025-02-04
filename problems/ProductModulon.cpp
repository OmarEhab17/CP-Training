#include <iostream>
#include <vector>
using namespace std;
int gcd(int a,int b){
    if(!a)
        return b;
    return gcd(b%a,a);
}

int main() {
        int n;
    cin >> n;
    vector<int>co(n);
    int prod =1;
    int cnt = 0;
for(int i = 1;i<n;++i){
    if(gcd(i,n) == 1){
       co[i]= 1;
        prod= (prod*i)%n;
        cnt++;

    }
}
if(prod!= 1){
    co[prod] = 0;
    cnt--;
}
cout << cnt<<"\n";
for(int i = 1;i<n;++i){
    if(co[i]){
        cout << i <<" ";
    }

}

    return 0;
}