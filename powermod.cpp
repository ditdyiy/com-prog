#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int mod(int a, int k, int m) {
    if (k == 0) return 1;
    int ans = mod(a,k/2,m);
    ans = (ans*ans);
    if (k % 2 == 1) {
        return (ans*a)%m;
    }
    return ans%m;
}
int main() {
    int a, k, m;
    cin >> a >> k >> m;
    cout << mod(a,k,m);
}