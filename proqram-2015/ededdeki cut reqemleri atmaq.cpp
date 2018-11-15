#include<iostream>
using namespace std;
int main(){int n,p=0,k=1;
	cin>>n;
	while(n>0){
		if(k%2==0)
		p=p*10+n%10;
		n/=10;
		k++;
	}
	while(p>0){
		n=n*10+p%10;
		p/=10;
	}
	cout<<n;
	return 0;
}
