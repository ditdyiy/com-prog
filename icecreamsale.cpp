#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string,double> m;
    int N;
    cin >> N;
    string ice;
    double price;
    for (int i = 0; i < N; i++) {
        cin >> ice >> price;
        m[ice] = price;
    }
    int M;
    cin >> M;
    map<string,int> v;
    string name;
    int num;
    for (int i = 0; i < M; i++) {
        cin >> name >> num;
        // if (m.find(name) == m.end()) {
        //     continue;
        // }

        auto found = v.find(name);
        if(found == v.end()) {
            v[name] = num;
        } else {
            v[name] += num;
        }
    }
    vector<pair<string,double>> v2;
    double max = 0;
    double total = 0;
    for (auto s : v) {
        for (int j = 0; j < m.size(); j++) {
            auto itr = m.find(s.first);
            if (itr != m.end()) {
                if (s.first == (*itr).first) {
                    double a = 0;
                    a = s.second*(*itr).second;
                    v2.push_back(make_pair(s.first,a));
                    if (a > max) {
                        max = a;
                    }
                    total += a;
                    break;
                }
            }
        } 
    }
    if (v2.size() == 0) {
        cout << "No ice cream sales";
    }
    else {
        cout << "Total ice cream sales: " << total << endl;
        cout << "Top sales: ";
        for (auto top: v2) {
            if (top.second == max) {
                cout << top.first << " ";
            }
        }
    }
}