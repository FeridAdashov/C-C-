#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,s=0,k=1,m=0;
	cin>>n;
	while(n>0){
		m=m*10+n%10;
		n/=10;	
	}
	while(m>0){
		if(k%2==1)
		s+=m%10;
		m/=10;
		k++;
	}
	cout<<s;
	return 0;
}
