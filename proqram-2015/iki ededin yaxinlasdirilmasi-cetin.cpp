#include<iostream>
#include<cmath>
using namespace std;
int kb(int n){int i,j,k,a;
j=n;
while(n>0){
	k++; n/=10;
} n=j;
int z[k];
while(n>0){
	z[i]=n%10;
	n/=10;
	i++;
}
for(i=0;i<k;i++)
for(j=0;j<k-1;j++)
if(z[j]>z[j+1])	{
	a=z[j];
	z[j]=z[j+1];
	z[j+1]=a;
}
for(i=0;i<k;i++)
n=n*10+z[i];
return n;}
int ters(int n){
	int p=0;
	while(n>0){
		p=p*10+n%10; n/=10;
	}return p;
}
int main(){
int n,a,b,c,t,i;
cin>>n;
cin>>t;
n=kb(n);
c=ters(n); a=pow((t-n),2);
    for(i=n;i<=c;i++)
	  if(kb(i)==kb(n) && pow((t-i),2)<=a){
	  	b=i;
	  	a=pow((t-i),2);
	  }
	  cout<<b;
return 0;
}
