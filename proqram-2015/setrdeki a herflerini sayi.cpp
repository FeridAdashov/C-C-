#include<iostream>
using namespace std;
int main(){
	
	char a[100];
	int s=0,i=0;
	
	cout<<"~~~~~~Setrdeki 'a' herflerinin sayini tapan proqram~~~~~~~\nSetri daxil et: ";
	gets(a);
	
	while(a[i]!='\0')
	{
		if(a[i]=='a' || a[i]=='A')
		s++;
		i++;
	}
	cout<<"Verilen setrdeki 'a' herflerinin sayi: "<<s<<endl;
	
	return 0;
	
}
