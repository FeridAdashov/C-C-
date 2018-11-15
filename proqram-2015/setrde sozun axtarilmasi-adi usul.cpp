#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i,k,j,t,s=0;
	char a[50],b[10];
	cout<<"                 SOZUN SETRDE AXTARILMASI PROQRAMI\nsetri daxil et: ";
	gets(a); cout<<"sozu daxil et: ";
	gets(b);
	k=strlen(b);
	t=strlen(a);
	for(i=0;i<t;i++){
		if(a[i]==b[0]){
			for(j=i;j<i+k,j<t;j++)
			{
				if(a[j]!=b[j-i])break;
				if(j==k+i-1 && ((a[i-1]==' '||i==0) && (a[i+k]==' ')||i+k==t)) {
				s++;
				cout<<s<<". bu soz setrde "<<i+1<<" -ci herfden baslayir\n";
				}
			}
		}
	}
	if(s==0) cout<<"bele soz setrde yoxdur...\n";
	cout<<"BY SAXURES...";
	return 0;
}
