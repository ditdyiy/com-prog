#include <bits/stdc++.h>
using namespace std;
int main() {
    int d, m, y, a, b, c;
    cin >> d >> m >> y >> a >> b >> c;
    y = y - 543;
    c = c - 543;
    int red = 0, black = 0, blue = 0;
    int year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //red
    for (int i=m-1; i<12; i++) {
        red += year[i];
    }
    red = red - d + 1;
    if (((y%4==0&&y%100!=0)||y%400==0) && m < 3) {
        red++;
    }
    //black
    black = (c - y - 1 ) * 365;
    //blue
    for (int i=0; i<b-1; i++) {
        blue += year[i];
    }
    blue = blue + a - 1;
    if (((c%4==0&&c%100!=0)||c%400==0) && b >= 3) {
        blue++;
    }
    int t = red + black + blue;
    double physical =  sin(2*M_PI*t/23);
    double emotional = sin(2*M_PI*t/28);
    double intellectual = sin(2*M_PI*t/33);
    cout << t << ' ' << round(physical*100.0)/100.0 << ' ' << round(emotional*100.0)/100.0 << ' ' << round(intellectual*100.0)/100.0 << endl;
    return 0;
}