//ejemplo 1 serie de taylor 
// funcion exponecial e^x
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

double factorial(int n);
double taylor(int n, int x);

int main(){
	int n, x;
	cout<<"valor para n:"<<endl; cin>> n;
	cout<<"valor para x:"<<endl; cin>> x;
	printf("El valor de taylor para n=%d, x=%d es = %f\n", n, x, taylor(n,x) );
	system("pause");

}

double taylor(int n, int x){
	double t, s=0;
	for(int i=0; i<n; i++) {
		t = pow(x,i)/factorial(i);
		s += t;
	}
	return s;
	
}

double factorial(int n){
	double fact = 1;
	for(int 
	i = 2; i<=n; i++) {
		fact *= i;
	}
	return fact;
} 
