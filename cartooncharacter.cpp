#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string,vector<string>> m;
    vector<string> v;
    string key, value;
    while (cin >> value) {
        cin >> key;
        m[key].push_back(value);
        if (find(v.begin(),v.end(),key) == v.end()) { //ไม่เจอ
            v.push_back(key);
        }
    }

    for (auto s1:v) {
        cout << s1 << ": ";
        for(auto s2:m[s1]){
            cout << s2 << " ";
        }
        cout << endl;
    } 
}