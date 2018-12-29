//Distancia entre dos puntos >:v
#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int x1,x2,y1,y2;
	double dis;
	cout<<"Ingrese las cordenadas"<<endl;
	cout<<"x1:"<<endl;
	cin>>x1;
	cout<<"y1:"<<endl;
	cin>>y1;
	cout<<"x2:"<<endl;
	cin>>x2;
	cout<<"y2:"<<endl;
	cin>>y2;
	dis=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout<<"La distancia es de "<<dis;
	return 0;
}
