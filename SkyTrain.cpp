#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string,set<string>> m;
    string a1, a2, a;
    while (cin >> a1) {
        if (!(cin >> a2)) break;
        if (m.find(a1) == m.end()) { //ไม่เจอ
            m[a1] = {};
        }
        if (m.find(a2) == m.end()) {
            m[a2] = {};
        }
        m[a1].insert(a2);
        m[a2].insert(a1);
    }
    set<string> s = m[a1];
    s.insert(a1);
    //m[a1] = {b,c,z} ออกมาเป็นเซต
    for (auto i : m[a1]) { 
        for (auto j : m[i]) {
            s.insert(j);
        }
    }
    for (auto i : s) {
        cout << i << endl;
    }
}
