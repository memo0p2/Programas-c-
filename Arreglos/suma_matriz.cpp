#include <iostream>
using namespace std;
int main(){
	int A[50][50];
	int B[50][50];
	int C[50][50];
	int N;
	cout<<"Ingresa el numero"<<endl;
	cin>>N;
	cout<<"Matriz A"<<endl;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"]";
			cin>>A[i][j];
		}
	}
	cout<<"Matriz B"<<endl;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"]";
			cin>>B[i][j];
		}
	}
	cout<<"Matriz suma"<<endl;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"]";
			C[i][j]=A[i][j]+B[i][j];
			cout<<C[i][j];
		}
		cout<<endl;
	}
	return 0;
}
