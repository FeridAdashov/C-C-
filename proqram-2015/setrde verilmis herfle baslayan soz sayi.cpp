#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[100],b;
	int k,i,t=0,j=0;
	gets(a);
	k=strlen(a);
	cin>>b;
	for(i=0;i<k;i++){
	if(a[i]==' ' || i==k-1){
	if(a[j]==b)
	t++;
	j=i+1;
	}
	}cout<<t;
	return 0;
}
