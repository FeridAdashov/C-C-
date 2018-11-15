#include<iostream>
using namespace std;
int main(){
	int n,x=0,t;
	cin>>n;
	t=n;
	while(n>0){
		x=x*10+n%10;
		n=n/10;
	}
	if(x==t) 
	cout<<"polindromdur...";
	else cout<<"polindrom deyil...";
	return 0;
}
