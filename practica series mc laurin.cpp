//ejemplo 2 serie de mc laurin 
// funcion sen(x)
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

double factorial(int n);
double mclaurin(int n, int x);

int main(){
	int n, x;
	cout<<"valor para n:"<<endl; cin>> n;
	cout<<"valor para x:"<<endl; cin>> x;
	printf("El valor de mc laurin para n=%d, x=%d es = %f\n", n, x, mclaurin(n,x) );
	system("pause");

}

double mclaurin(int n, int x){
	double m, s=0;
	for(int i=0; i<n; i++) {
		m = pow(-1,i)*pow(x,2*i+1)/factorial(2*i+1);
		s += m;
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
