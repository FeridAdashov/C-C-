#include<iostream>
using namespace std;

int fib(int n){
	if(n==1 || n==2) return 1;
	else return fib(n-1)+fib(n-2);	
}



int main(){
	int n;
	cout<<"Necenci Fibonacci ededini tapaq: ";
	cin>>n;
	cout<<n<<" -ci Fibonacci ededi: "<<fib(n);
	return 0;
}
