#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n<2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int num=0,res=0;
    cout<<"Fibonacci prro"<<endl;
    cout<<"Introduce el numero de numeros: "<<endl;
	cin>>num;
    for(int i=0;i<=num-1;i++)
    {
        res = fibonacci(i);
        cout<<res<<" ";
    }
    return 0;
}
