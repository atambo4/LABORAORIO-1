//ecuaciones de segundo grado
#include <iostream>
#include <math.h>

using namespace std;
 
float a,b,c;
float X1,X2;
int main(){
	cout <<"ingresar la constante a:"<<endl;
	cin>>a;
	cout <<"ingrear la constante b:"<<endl;
 	cin>>b;
 	cout <<"Ingresar la constante c:"<<endl;
 	cin>>c;
 	
 	X1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
 	X2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
 	
 	
 	cout <<"X1="<<X1<<endl;
 	cout <<"X2="<<X2<<endl;
 	
	return 0;
}

