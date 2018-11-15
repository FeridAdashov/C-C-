#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b) return a;
	else    return b;
}
int min(int a,int b,int c){int min;
	if(a<b && a<c) min=a; 
	else if(b<c)   min=b;
	else min=c;
	return min;
}
int main(){
	int M,a,b,c,k,e;
	cout<<"5 eded daxil edin: ";
	cin>>a>>b>>c>>k>>e;
	M=min(a,max(b,c),min(k,e));
	cout<<"min("<<a<<","<<"max("<<b<<","<<c<<"),min("<<k<<","<<e<<"))="<<M;
	return 0;
}
