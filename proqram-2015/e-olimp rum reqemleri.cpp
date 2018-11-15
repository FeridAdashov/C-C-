#include<iostream>
using namespace std;
int main(){
	char a[3],b[3];
	int c,d;
	cout<<"iki rum reqemi daxil et:\n";
	gets(a);
	gets(b);
	if(a[0]=='I') c=1;
	if(a[0]=='V') c=5;
	if(a[0]=='X') c=10;
	if(a[0]=='L') c=50;
	if(a[0]=='C') c=100;
	if(a[0]=='D') c=500;
	if(a[0]=='M') c=1000;
	if(a[0]=='I' && a[1]=='V') c=4;
	if(a[0]=='I' && a[1]=='I' && a[2]=='X') c=8;
	return 0;
}
