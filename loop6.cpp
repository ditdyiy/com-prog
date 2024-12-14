#include <iostream>
using namespace std;
int main() {
    int h,s=0;
    cin>>h;
    for (int i = 0;i<h;i++) {
        for (int j = 0;j<h+i;j++) {
            if (j==h-1-s||j==h-1+s||i==h-1) {
                cout<<'*';
            }
            else {
                cout<<'.';
            }
         }
         s++;
         cout<<endl;
    }
}

 //for (int a=1;a<=h;a++) {
    //     for (b=h-1;b>=a;b--) {
    //         cout<<'.';
    //     }
    //     for (c=1;c<=a;c++) {
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }/ 