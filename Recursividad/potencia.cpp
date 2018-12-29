#include<iostream>
using namespace std;
int expo(int num,int exp){
	if(exp==1){
		return num;
	}else{
		return num*expo(num,exp-1);
	}
}
int main(){
	int num,exp,res;
	cout<<"Ingrese la base"<<endl;
	cin>>num;
	cout<<"Ingrese el exponente"<<endl;
	cin>>exp;
	res=expo(num,exp);
	cout<<"El numero es "<<res;
	return 0;
}
