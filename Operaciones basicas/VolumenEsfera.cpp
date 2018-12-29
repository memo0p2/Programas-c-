#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float radio=0.0;
	float volumen=0.0;
	const float pi=3.1416;
	cout<<"Volumen de una esfera :v/";
	cout<<"Ingrese el radio de la esfera"<<endl;
	cin>>radio;
	volumen=(4.0/3.0)*pi*pow(radio,3);
	cout<<"Su volmen es de "<<volumen;
	return 0;
}
