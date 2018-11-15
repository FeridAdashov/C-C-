#include<iostream>
using namespace std;
int fakt(int n){
	if(n==1) return 1;
	else return n*fakt(n-1);
}
int main(){
	float a,L=0,i,k,m,n;
	cin>>n>>k>>m;
	for(i=1;i<=n;i++)
	L+=fakt(i)/(k+m*i);
	cout<<L;
	return 0;
}
