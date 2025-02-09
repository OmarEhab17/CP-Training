#include <iostream>
using namespace std;
int rt[100001];
//Complexity: O(n)
int root(int x) { return rt[x] == x ? x : rt[x] = root(rt[x]); }
//Complexity: O(n)
bool connected(int x, int y) { return root(x) == root(y); }
//Complexity: O(n)
void merge(int x, int y) { rt[root(x)] = root(y); }