#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string,string> name;
    string a,b;
    int n1,n2;
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cin >> a >> b;
        name[a] = b;
        name[b] = a;
    }
    cin >> n2;
    vector<string> ans;
    string name2;
    for (int i = 0; i < n2; i++) {
        cin >> name2;
        if (name.find(name2) != name.end()) {
            auto itr = name.find(name2);
            ans.push_back((*itr).second);
        }
        else {
            ans.push_back("Not found");
        }
    }
    for (string ae : ans) {
        cout << ae << endl;
    }
}