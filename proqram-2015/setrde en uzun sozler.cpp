#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100],s[100],b[20];
	int k,t=0,l=0,say=0,j,n;
	gets(a);
	k=strlen(a);
	for(j=0;j<k;j++)
	{   n=0; int say2=0;
		 while(a[j]!=' ' && j<k){
			b[n]=a[j];
			j++;
			n++;
			say2++;
		 }
		 char c[say2];
		 strncpy(c,b,say2);
		if(say2==l){
			strcat(s," ");
		 	strcat(s,c);
			 say++;
		 }
		if(say2>l){ 
		l=say2;
		 strcpy(s,c);
		 say=0;
		 say++;
		 }
		 
	}cout<<"say= "<<say<<endl;
	for(j=0;j<strlen(s);j++){
	cout<<s[j];
	if(s[j]==' ') cout<<"\n";}
	return 0;
}
