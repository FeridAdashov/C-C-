#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[100];
	int k,i,t,j=0;
	gets(a);
	k=strlen(a);
	
	for(i=0;i<k;i++){
		if(a[i]==' ' || i==k-1){
			if(i==k-1 && a[i]!=' ') i++;
			if(a[i-1]==a[j])
			for(t=j;t<i;t++)
			cout<<a[t];
			j=i+1;
			cout<<endl;
		}
	}
	return 0;
}
