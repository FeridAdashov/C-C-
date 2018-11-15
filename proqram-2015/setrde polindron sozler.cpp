#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[100];
	int l,i,j,k,n;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++){
		j=i;
		while(a[i]!=' ' && i!=l)
			i++;
			
		n=i-1;
		if(a[j]!=' ')
		for(k=j;k<j+(i-j)/2;k++)
		{
			if(a[k]!=a[n])
			break;
			n--;
		}
		if(k==j+(i-j)/2)
		for(k=j;k<i+1;k++) cout<<a[k];
	}
	
	
	return 0;
}
