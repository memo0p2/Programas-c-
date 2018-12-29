#include<iostream>
using namespace std;
int main(){
	char cadena[30];
	int edad;
	cout<<"Ingresa tu edad"<<endl;
	cin>>edad;
	cin.ignore();//Limpia el buffer :V
	cout<<"Ingresa tu nombre"<<endl;
	cin.get(cadena,30);
	cout<<"Tu edad es: "<<edad<<"Y tu nomnre es: "<<cadena;
	return 0;
}
