#include <bits/stdc++.h>
using namespace std;
int main() {
    long long m=0, n=1000000000;
    cin >> m >> n;
    long long ans = 0, power;
    while (true) {
        int sizem = to_string(m).size();
        int sizen = to_string(n).size();
        if (sizem == sizen) {
            ans += (n - m + 1)*sizem;
            break;  
        }
        else {
            power = pow(10, sizem);
            ans += (power - m)*sizem;
            m = power;
        }  
    }
    cout << ans;
}