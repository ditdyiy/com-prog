#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, vector<string>> m;
    int n;
    cin >> n;
    cin.ignore(); 
    string song = "", artist = "", word;
    for (int i = 0; i < n; i++) {
        getline(cin,word);
        int a = word.find(",");
        if (a != string::npos) { //เจอ string::nposคืนค่าว่าไม่เจอ
            artist = song.substr(a+1) 
        }
    }
}
