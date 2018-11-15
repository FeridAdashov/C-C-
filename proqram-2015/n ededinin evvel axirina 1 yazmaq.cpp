#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,k=0,m;
	cin>>n;
	m=n;
	if(n==0) k++;
	while(n>0){
		k++;
		n/=10;
	}
	m=(m+pow(10,k))*10+1;
	cout<<m;
	return 0;
}
