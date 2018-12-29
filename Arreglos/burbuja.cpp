#include <iostream>
using namespace std;
int main(){
	int num[]={6,5,9,3,0,1,8,7,4,2};
	int aux;
	int tam=sizeof(num)/sizeof(num[0]);
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam-1;j++){
			if(num[j]>num[j+1]){
				int aux=num[j];
				num[j]=num[j+1];
				num[j+1]=aux;
			}	
		}
	}
	for(int i=0;i<tam;i++){
		cout<<num[i];
	}
	return 0;
}
