#include <iostream>
#include <string>
using namespace std;
int main () {
    string nx,ny,m;
    double gpax,gpay;
    char comx,comy,cal1x,cal1y,cal2x,cal2y;
    cin>>nx>>gpax>>comx>>cal1x>>cal2x>>ny>>gpay>>comy>>cal1y>>cal2y;
    if (comx!='A'||cal1x>'C'||cal2x>'C') {nx="";}
    if (comy!='A'||cal1y>'C'||cal2y>'C') {ny="";}
    if (nx==""&&ny=="") {cout<<"None";}
    else if (nx=="") {cout<<ny;}
    else if (ny=="") {cout<<nx;}
    else {if (gpax<gpay) {m=ny;}
            else if (gpax>gpay) {m=nx;;}
            else if (gpax==gpay) 
            {if (cal1x>cal1y) {m=ny;}
                else if (cal1x<cal1y) {m=nx;}
                else if (cal1x==cal1y) 
                {if (cal2x>cal2y) {m=ny;}
                    else if (cal2x<cal2y) {m=nx;}
                    else if (cal2x==cal2y) {cout<< "Both";}
                }
            
            }
        }
    cout<<m;
}