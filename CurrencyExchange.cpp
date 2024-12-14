#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string,double> m = {{"THB",1}};
    int n;
    cin >> n;
    string key;
    double value;
    for (int i = 0; i < n; i++) {
        cin >> key >> value;
        m[key] = value;
    }
    int money;
    cin >> money >> key;
    cout << money << " " << key;
    string nextkey;
    while (cin >> nextkey) {
        money = int(money*m[key] / m[nextkey]);
        key = nextkey;
        cout << " -> " << money << " " << key;
    }
}