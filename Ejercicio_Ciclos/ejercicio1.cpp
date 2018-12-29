#include<iostream>
using namespace std;
int main(){
	float num,suma;
	num=0;
	suma=0;
	do{
		cout<<"Ingrese un numero"<<endl;
		cin>>num;
		if(num>=0)
		suma=suma+num;
	}while(num>=0);
	cout<<"La suma total es de: "<<suma;
	return 0;
}
