#include<iostream>
#include<cmath>
using namespace std;
int main(){
	unsigned x,y;
	int p,n,i,t;
	cin>>x>>y>>p>>n;
	for(i=1;i<=n;i++)
		if(((x>>(p-i))%2)!=(y>>(n-i))%2){
		t=pow(2,p-i);
		x=(x^t);
	}
	cout<<x;
	return 0;
}
