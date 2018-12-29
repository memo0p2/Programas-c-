#include<iostream>
using namespace std;
int main(){
	int A[][3]={{1,2,3},{4,5,6}};
	int filas=2,columnas=3;
	int B[columnas][filas];
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			B[j][i]=A[i][j];
		}
	}
	for(int i=0;i<columnas;i++){
		for(int j=0;j<filas;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
