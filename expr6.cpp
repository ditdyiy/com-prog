#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
    double xe,ye,re,rp,xm,ym,xp,yp;
    cin>>xe>>ye>>re>>rp>>xm>>ym;
   double A=xm-xe;
   double B=ym-ye;
   double C=sqrt(A*A+B*B);
   double c=re-rp;
   double a=c/C*A;
   double b=c/C*B;
   xp=xe+a;
   yp=ye+b;
   cout<< round(xp)<<" "<< round(yp);
}