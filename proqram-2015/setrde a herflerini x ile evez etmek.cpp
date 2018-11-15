#include<iostream>
using namespace std;
int main(){
	
	char a[100];
	int i=0;
	cout<<"Setrdeki 'a' herflerini 'x' herfi ile evez etmek\nSetri daxil et: ";
	gets(a);
	while(a[i]!='\0'){
		if(a[i]=='a' || a[i]=='A')
		a[i]='x';
		i++;
		
	}
	cout<<"evez olunmadan sonra setrimiz: "<<a;
	
	return 0;
}
