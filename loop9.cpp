#include <bits/stdc++.h>
using namespace std;
int main() {
    string t;
    cin >> t;
    int k;
    cin >> k;
    int cnt = 1;
    string venus = "";
    
    for (int i = 1; i <= t.size(); i++) {
        if (t[i] == t[i-1]) {
            cnt++;
        }
        else {
            if (cnt < k) {
                venus += t.substr(i-cnt,cnt);
            }
            cnt = 1;
        }
    }
    cout << venus;
}
