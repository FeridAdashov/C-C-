#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,s=0,k,m=0;
	cout<<"ededi daxil et: ";
	cin>>n;
	cout<<"\nevvelden sayi daxil et: ";
	cin>>k;
		while(n>0){
		m=m*10+n%10;
		n/=10;	
	}
		while(k>0){
		s+=m%10;
		k--;
		m/=10;
	}
	cout<<"\nreqem cemi: "<<s;	
	return 0;
}
