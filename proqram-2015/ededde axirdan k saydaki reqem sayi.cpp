#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,s=0,k;
	cout<<"ededi daxil et: ";
	cin>>n;
	cout<<"\naxirdan sayi daxil et: ";
	cin>>k;
	while(k>0){
		s+=n%10;
		k--;
		n/=10;
	}
	cout<<"\nreqem cemi: "<<s;
	return 0;
}
