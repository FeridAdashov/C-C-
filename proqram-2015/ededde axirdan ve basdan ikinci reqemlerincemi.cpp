#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,s=0,k;
	cout<<"ededi daxil et: ";
	cin>>n;
	s+=n%100/10;
	while(n>100){
		n/=10;
	}
	s+=n%10;
	cout<<s;
	return 0;
}
