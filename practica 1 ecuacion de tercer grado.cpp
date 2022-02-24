//Ecuaciones de tercer grado según el Método de Cardano
 
 
#include<iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 
int main(){
   double A,B,C,D;
   double a1,b1,c1;
   double p,q,dis;
   double x,y,z,pi;
   double ab,ac;
   double u,v,t;
 
   cout<<" Ecuacion cubica de la forma AX^3 + BX^2 + CX + D"<<endl;
   cout<<" Introduzca "<<endl;
   cout<<" A :"; cin>> A;
   cout<<" B :"; cin>> B;
   cout<<" C :"; cin>> C;
   cout<<" D :"; cin>> D;
 
   cout.precision(3); 
   t = 0.0000000009; 
   pi = 3.141592654;
   a1 = B/A;
   b1 = C/A;
   c1 = D/A;
   p = b1 - (a1*a1)/3; 
   q = (2*a1*a1*a1)/27 - (a1*b1)/3 + c1; 
   dis = (q*q) + (4*p*p*p)/27; 
   cout<< " Ecuacion reducida : Z^3 + "<<p<< " Z + "<<q<<endl;
   cout<< " El discriminante es "<<dis<<endl;
 
 
   if ( dis >= t ) { 
     ab = 0.5*(-q + sqrt(dis));
     double racub(ab); 
     if (ab> 0) {
	racub = exp(log(ab)/3);
     };
     if (ab== 0){
	racub = 0;
     };
     if (ab<0) {
	racub =-exp(log(-ab)/3);
     };
     ac = -0.5*(q + sqrt(dis));
	 double racub2(ac);
    if (ac> 0) {
	racub2 = exp(log(ac)/3); 
     };
     if (ac== 0){
	racub2 = 0;
     };
     if (ac<0) {
	racub2 =-exp(log(-ac)/3);
     };
     u = racub; 
     v = racub2; 
     x = u + v -(a1/3);
     y = (-0.5)*(u+v) -(a1/3);
     z = (0.5)*sqrt(3)*(u-v);
     cout<<" La ecuacion tiene una raiz real y 2 complejas "<<endl;
     cout<<" X1 :"<<x<<endl;
     cout<<" X2 :"<<y<<" + "<<z<<"i"<<endl;
     cout<<" X3 :"<<y<<" - "<<z<<"i"<<endl;
    };
 
 
   if ((dis < t and dis > -t) and (p>=-t and p<=t)){ 
     cout<<" La ecuacion tiene una sola raiz"<<endl;
     cout<<" X :"<<-(a1/3);
	};
 
 
   if ((dis < t and dis > -t) and (p>=t or p<=-t)){ 
     ab = -0.5*q;
     double racub(ab);
     if (ab> 0) {
	racub = exp(log(ab)/3); 
     };
     if (ab== 0){
	racub = 0;
     };
     if (ab<0) {
	racub =-exp(log(-ab)/3);
     };
     u = racub;
     x = 2*u -(a1/3);
     y = -u -(a1/3);
     cout<<" La ecuacion tiene raices multiples"<<endl;
     cout<<" X1    :"<<x<<endl;
     cout<<" X2=X3 :"<<y<<endl;
	};
 
 
   if ( dis <= -t ) { 
    x = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt(-27/(p*p*p)))/3) -(a1/3);
    y = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt((-27)/(p*p*p)))/3 +2*pi/3) -(a1/3);
    z = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt((-27)/(p*p*p)))/3 +4*pi/3) -(a1/3);
     cout<<" La ecuacion tiene 3 raices distintas "<<endl;
     cout<<" X1 :"<<x<<endl;
     cout<<" X2 :"<<y<<endl;
     cout<<" X3 :"<<z<<endl;
    };
 
 
    getch(); 
  return 0;
} 

