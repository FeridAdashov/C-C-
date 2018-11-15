#include<iostream>
using namespace std;
int main(){ float a,b;
	cin>>a>>b;
	if(b>a){
		a+=b; b=a-b; a=a-b;
	}
	if(a/2>=b) cout<<b;
	else cout<<a/2;
	return 0;
}
