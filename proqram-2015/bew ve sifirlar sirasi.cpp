#include<iostream>
#include<cmath>
using namespace std;
int main(){int a=0,k=0,n;
	cin>>n;
	while(k!=n){
		k++;
		if(a<pow(10,k))
		a=a+5;
		else a*=10;
		
	}
	cout<<a;
	
	return 0;
}
