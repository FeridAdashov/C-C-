#include <iostream>
#include <string.h>
using namespace std;
int main(){
int i,j,k;
char *p[5],a[100];
for(i=0;i<5;i++){
	gets(a);
	k=strlen(a);
	p[i]=new char [k];
	strcpy(p[i],a);
}
for(i=0;i<5;i++)
for(j=0;j<4;j++)
{
	if(strlen(p[j])>strlen(p[j+1])){
	strcpy(a,p[j]);
	strcpy(p[j],p[j+1]);
	strcpy(p[j+1],a);}
}
for(i=0;i<5;i++)
cout<<p[i]<<"\n";
return 0;
}
