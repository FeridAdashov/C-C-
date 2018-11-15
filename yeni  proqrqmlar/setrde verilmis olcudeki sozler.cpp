#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[100];
	int k,i,t=0,j,say,say1;
	cout<<"Setrde verilmis olcudeki sozler\nsetri daxil et:\n";
	gets(a);
	k=strlen(a);
	cout<<"Olcunu daxil et: ";
	cin>>say;
	for(i=0;i<k;i++)
	{j=i; say1=0;
		while(a[i]!=' ' && i!=k){
			say1++;
			i++;
		}
		if(say==say1){
		for(t=j;t<i;t++)cout<<a[t];
		cout<<endl;}
	}
	
	return 0;	
}
