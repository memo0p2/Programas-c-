#include<iostream>
using namespace std;
int main(){
	int num[5];
	int aux;
	for(int i=0;i<5;i++){
		cout<<"Ingrese el valor "<<i+1<<endl;
		cin>>num[i];
	}
	for(int i=0;i<5;i++){
		if(i==0)
			aux=num[i];
		else{
			if(num[i]<aux){
				aux=num[i];
			}
		}
	}
	cout<<"el numero menor es: "<<aux;
	return 0;
}
