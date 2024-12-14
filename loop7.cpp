#include <iostream>
#include <string>
using namespace std;
int main() {
    string pw;
    while (cin>>pw) {
        int size = pw.size();
        int big = 0, small = 0, num = 0, spe = 0;
        for (int i = 0; i < size; i++) {
            char c = pw[i];
            if (isupper(c)) big = 1;
            else if (islower(c)) small = 1;
            else if (isdigit(c)) num = 1;
            else spe = 1;
        }
        if (size >= 12 && big && small && num && spe) {
            cout << ">> strong" << endl;
        }
        else if (size >= 8 && big && small && num) {
            cout << ">> weak" << endl;
        }
        else cout << ">> invalid" << endl;
    }
    return 0;
}
// for (int i;i<pw.size();i++) {
    //     if (pw[i]>=21&&pw[i]<=84) {
    //         if (pw.size()>=8&&pw.size()<12) {
    //             cout<<">> weak";
    //         }
    //         else if (pw.size()>=12) {
    //             cout<<">> strong";
    //         }
    //     }
    //     else cout<<">> invalid";
    //     break;
    // }
    // return 0;