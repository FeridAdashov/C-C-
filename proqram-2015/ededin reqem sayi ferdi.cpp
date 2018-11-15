#include<iostream>
using namespace std;
int say(int n){static int s=0;
	if(n>0) {s++;
	return say(n/10);}
	if(n==0 && s!=0) return s;
	else return 1;
}
int main(){
	
	int n,s=0;
	cin>>n;
	cout<<say(n);
	return 0;
}
