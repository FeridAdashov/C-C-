#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[100],b;
	int k,i,t=0,j=0;
	cout<<"Verilmis herfle baslayan soz sayi\n\nsetri daxil et:\n";
	gets(a);
	k=strlen(a);
	cout<<"Herfi daxil et: ";
	cin>>b;
	for(i=0;i<k;i++){
	if(a[i]==' ' || i==k-1){
	if(a[j]==b)
	t++;
	j=i+1;
	}
	}cout<<b<<" ile baslayan "<<t<<" soz var...";
	return 0;
}
