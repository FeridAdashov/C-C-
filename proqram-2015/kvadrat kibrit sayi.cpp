#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,k=4,z=1,b=1,c;
	cin>>a;
	while(z!=a){
		c=sqrt(b);
	b=b/c+b;
	z++;	
	k+=3;
	while(z<b){
		if(z==a) break;
		z++;
		k+=2;
	}
	} cout<<k;
	return 0;
}
