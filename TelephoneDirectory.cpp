#include <bits/stdc++.h>
using namespace std;
int main() {
    int n1, n2;
    cin >> n1;
    map<string,string> m;
    string name, lastname, tel;
    for (int i = 0; i < n1; i++) {
        string n = "";
        cin >>  name;
        cin >> lastname;
        n = name + " " + lastname;
        cin >> tel;
        m[n] = tel;
        m[tel] = n;
    }
    vector<pair<string,string>> v;
    string it;
    cin >> n2;
    cin.ignore();
    for (int i = 0; i < n2; i++) {
        getline(cin,it);
        if (m.find(it) != m.end()) { //หาเจอ
            //auto itr = m.find(it);
            //v.push_back(make_pair(it,(*itr).second));
             v.push_back(make_pair(it, m[it]));
        }
        else { //หาไม่เจอ
            v.push_back(make_pair(it,"Not found"));
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " --> " << v[i].second << endl;
    }
}