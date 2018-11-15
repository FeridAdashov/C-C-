#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,n,i;
	cin>>n;
	for(i=0;i<n;i++){
		a=b;
		b=a+b;
	}
	cout<<a+b;
	return 0;
}
