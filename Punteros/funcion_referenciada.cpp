#include<iostream>
using namespace std;
void multi(int *num1, int num2){
	*num1=*num1 * num2;
}
int main(){
	int a=10;
	cout<<a<<endl;
	multi(&a,10);
	cout<<a<<endl;
	return 0;
}
