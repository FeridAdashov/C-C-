#include<iostream>
using namespace std;
int main(){
	char a[100];
	int i=0,s=0;
	
	cout<<"Setri daxil et: ";
	gets(a);
	
	while(a[i]!='\0'){
		i++;
		s++;
	}
	
	cout<<"Verilen Setrin uziunlugu: "<<s;
	
	return 0;
	
}
