#include <iostream>
#include <string>
using namespace std;
int main () {
    int a;
    cin>>a;
    if (a<=100) {cout<<"18";}
    else if (a>100&&a<=250) {cout<<"22";}
    else if (a>250&&a<=500) {cout<<"28";}
    else if (a>500&&a<=1000) {cout<<"38";}
    else if (a>1000&&a<=2000) {cout<<"58";}
    else {cout<<"Reject";}
}