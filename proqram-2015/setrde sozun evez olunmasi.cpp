#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[100],b[20],c[20];
	int l,l1,l2,i,j=0,k,n,t;
	cout<<"setrde sozun evez olunmasi\nsetri daxil et:\n";
	gets(a);
	cout<<"evez olunacaq sozu daxil et: ";
	gets(b);
	cout<<"Hansi sozle evez olunsun? : ";
	gets(c);
	l=strlen(a);
	l1=strlen(b);
	l2=strlen(c);
	for(i=0;i<l;i++)
	{	j=0; n=i; k=0;
		while(a[i]==b[j] && a[i]!=' ' && i<l){
			i++;
			j++;
		}
		if(l1==j){
			if(l1<l2){
			l+=(l2-l1);
		for(t=l;t>=i;t--)
		a[t+(l2-l1)]=a[t];}
			else if(l1>l2){
		for(t=i;t<l;t++)
		a[t-(l1-l2)]=a[t];
			l-=(l1-l2);}
		for(t=n;t<n+l2;t++){
			if(n!=0 && a[n-1]!=' ') break;
		a[t]=c[k];
		k++;
		}
		}
	}
	for(i=0;i<l;i++) cout<<a[i];
	
	return 0;
}
