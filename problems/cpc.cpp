#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <algorithm>
#define int long long
using namespace std;
int32_t main() {
    string s;
    cin >> s;
    int length = s.length();
    char temp_char = s[0];
   int sum = 0;
   int cnt = 0;
   for (int i = 0; i < length; i++)
   {
       if (s[i] == temp_char && temp_char == '<')
       {
           cnt++;
           sum += cnt;
              }
       
       else {
           temp_char = s[i];
           cnt = 1;
           sum += cnt;
       }
   }
   cout << sum << endl;
       return 0;
}
        