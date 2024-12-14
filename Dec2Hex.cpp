#include <iostream>
using namespace std;
string dec2hex(int d) {
    if (d == 0) return "0";
    string hex = "";
    string hexDigits = "0123456789ABCDEF"; // ตัวเลขและตัวอักษรที่ใช้ในเลขฐาน 16

    while (d > 0) {
        int remainder = d % 16;
        hex = hexDigits[remainder] + hex;
        d /= 16;
    }

    return hex;
}
int main() {
 int d;
 while (cin >> d) {
 cout << d << " -> " << dec2hex(d) << endl;
 }
 return 0;
} 
