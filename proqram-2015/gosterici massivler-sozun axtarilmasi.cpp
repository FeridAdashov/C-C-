#include<iostream>
#include<cstring>
using namespace std;
int main(){int k,j,i;
	char *a[5]={"ferid","jabbar","nizami","masdi","kenan"};
	char b[20];
	gets(b);
	k=strlen(b);
	for(i=0;i<5;i++)
	if(*a[i]==b[0]){
		for(j=0;j<k;j++){
		if(*(a[i]+j)!=b[j]) break;
		if(j==k-1) cout<<"bu soz massivin "<<i<<" -ci elementindedir\n";
	}
	}	
	else if(i==4)cout<<"bele bir soz massivde yoxdur...";
	return 0;
}
