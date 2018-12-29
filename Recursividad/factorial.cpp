//Factorial
#include<iostream>
using namespace std;
int fac(int num){
	if(num==1)
		return 1;
	else
		return num*fac(num-1);
}
int main(){
	int num;
	cout<<"Ingrese un numero"<<endl;
	cin>>num;
	cout<<"Su factorial es: "<<fac(num);
	return 0;
}
