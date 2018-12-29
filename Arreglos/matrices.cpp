#include<iostream>
using namespace std;
int main(){
	int num [][3]={{3,4,5},{3,5,2},{6,4,2},{2,5,6}};
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cout<<num[i][j];
		}
		cout<<endl;
	}
	return 0;
}
