#include <bits/stdc++.h>
using namespace std;
int main(){
    int red, blue, cnt=0;
    int mx_r = INT_MIN, mn_r = INT_MAX, mx_b = INT_MIN, mn_b = INT_MAX;
    int num;
    while(cin >> num){
        if(num == -998 || num == -999) break;
        else{
            if(cnt%2 == 0){
                red = num;
                cin >> blue;
            }
            else if(cnt%2 == 1){
                blue = num;
                cin >> red;
            }
            if(mx_r < red) mx_r = red;
            if(mn_r > red) mn_r = red;
            if(mx_b < blue) mx_b = blue;
            if(mn_b > blue) mn_b = blue;

        }
        cnt++;
    }
    if(num == -998) cout << mn_r << " " << mx_b;
    else if(num == -999) cout << mn_b << " " << mx_r;
    return 0;
}




// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int x=0, y=0, count=0;
//     int rmax=INT_MIN, rmin=INT_MAX, bmax=INT_MIN ,bmin=INT_MAX;
//     cin >> x;
//     while (x!=-998 && y!=-999) {
//         cin >> y;
//         count++;
//         if (count != 0) {
//             if (x<rmin) rmin=x;
//             if (x>bmax) bmax=x;
//             if (y<bmin) bmin=y;
//             if (y>rmax) rmax=y;
//         }
//         else {
//             if (x>bmax) bmax=x;
//             if (x<rmin) rmin=x;
//             if (y<rmin) rmin=y;
//             if (y>bmax) bmax=y;
//         }
//         cin >> x;
        
//     }
//     if (x==-998) {
//        cout <<  rmin << ' ' << bmax;
//     }
//     else if (x==-999) {
//         cout <<  rmin << ' ' << bmax;
//     }
// }
// // int x[1000], y[1000], red[1000], blue[1000];
//     // int max, min;
//     // for (int i=0; i<1000; i++) {
//     //     cin >> x[i] >> y[i];
//     // }
//     // int z;
//     // cin >> z;
//     // if (z==-998) {
//     //     for (int i=0; i<1000; i++) {
//     //         if (i%2==0) {
//     //             red[i] = x[i];
//     //             blue[i] = y[i];
//     //         }
//     //         else {
//     //             red[i] = y[i];
//     //             blue[i] = x[i];
//     //         }
//     //     }
//     //     max = y[0];
//     //     min = x[0];
//     //     for (int i=0; i<; i++) {
//     //         if (red[i]<min) {
//     //             min = red[i];
//     //         }
//     //         if (blue[i]<max) {
//     //             max = blue[i];
//     //         }
//     //     }
//     // }
//     // else if (z==-999) {
//     //     for (int i=0; i<row; i++) {
//     //         if (i%2==0) {
//     //             red[i] = y[i];
//     //             blue[i] = x[i];
//     //         }
//     //         else {
//     //             red[i] = x[i];
//     //             blue[i] = y[i];
//     //         }
//     //     }
//     //     max = x[0];
//     //     min = y[0];
//     //     for (int i=0; i<row; i++) {
//     //         if (red[i]<min) {
//     //             min = red[i];
//     //         }
//     //         if (blue[i]<max) {
//     //             max = blue[i];
//     //         }
//     //     }
//     // }
//     // cout << min << ' ' << max;