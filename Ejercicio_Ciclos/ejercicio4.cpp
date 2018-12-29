#include <iostream>
using namespace std;
int main(){
	int num0=0;
	int num1=1;
	int res=0;
	int N;
	cout<<"Ingrese el lugar de la serie"<<endl;
	cin>>N;
	if(N<2)
		cout<<"El valor es: "<<N;
	else{
		for(int i=2;i<=N;i++){
			res=num1+num0;
			num0=num1;
			num1=res;
		}
		cout<<"El valor es: "<<res;
	}
	return 0;
}
