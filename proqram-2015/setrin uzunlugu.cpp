#include<iostream>
#include<string.h>
using namespace std;
int uz(char *p){
	int k=0;
	while(*p){
		if(*p!=' ')
		k++;
		p++;	
	}
	return k;
}

int main(){
	char a[100];
	gets(a);
	cout<<uz(a);
	return 0;
}
