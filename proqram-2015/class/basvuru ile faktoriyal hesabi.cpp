#include<iostream>
using namespace std;

int faktorial(int &x){
	int i,p=1;
	for(i=1;i<=x;i++)
	p*=i;
	return p;
}
int main(){
	int n;
	n=5;
	cout<<faktorial(n);
	return 0;
}
