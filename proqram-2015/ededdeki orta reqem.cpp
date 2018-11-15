#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,k=0,m;
	cin>>n;
	m=n;
	while(n>0){
		k++;
		n/=10;
	}
	m=m/pow(10,k/2);
	cout<<m%10;
	
	return 0;
}
