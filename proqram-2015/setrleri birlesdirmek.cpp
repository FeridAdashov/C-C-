#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[1024],b[20];
	int i;
	gets(b);
	strcat(a,b);
	gets(b);
	strcat(a,b);
	cout<<a;
	return 0;
}
