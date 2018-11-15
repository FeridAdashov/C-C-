#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	int n,p=0,k=0,m;
	cin>>n;
	m=n;
	if(n%2==0) n++;
	while(n>0){
		p=p*10+n%2;
		n/=2;
	}
	while(p>0){
		n=n*10+p%2;
		p/=10;
	}
	if(m%2==0) n--;
	cout<<n;
	return 0;
}
