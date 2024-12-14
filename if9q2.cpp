#include <iostream>
using namespace std;
int main () {
    int d,m,y,n;
    cin>>d>>m>>y;
    y=y-543;
    n=28;
    if ((y%4==0&&y%100!=0)||y%400==0) n=29;
    if (m==1) cout<<d;
    if (m==2) cout<<d+31;
    if (m==3) cout<<31+n+d;
    if (m==4) cout<<31+n+31+d;
    if (m==5) cout<<31+n+31+30+d;
    if (m==6) cout<<31+n+31+30+31+d;
    if (m==7) cout<<31+n+31+30+31+30+d;
    if (m==8) cout<<31+n+31+30+31+30+31+d;
    if (m==9) cout<<31+n+31+30+31+30+31+31+d;
    if (m==10) cout<<31+n+31+30+31+30+31+31+30+d;
    if (m==11) cout<<31+n+31+30+31+30+31+31+30+31+d;
    if (m==12) cout<<31+n+31+30+31+30+31+31+30+31+30+d;
}