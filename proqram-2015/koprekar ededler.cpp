#include<iostream>
#include<cmath>
using namespace std;
int say(int n){
	int k=0;
	while(n>0){
		k++;
		n/=10;
		
	}return k;
	}
	
	int main(){
	int a,n,i,j,d,r,f,e;
	cout<<"9998-den asagi dordreqemli eded daxil et: ";
	cin>>r;
	for(;;){
	a=r;   e=r;
	n=say(a);
	int b[n],c[n];
	i=0;
	while(a>0){
		b[i]=a%10;
		c[i]=a%10;
		a/=10;
		i++;
	}
	for(j=0;j<n;j++)
	for(i=0;i<n-1;i++){
	if(b[i]>b[i+1]){
	d=b[i];
	b[i]=b[i+1];
	b[i+1]=d;	
	}
	if(c[i]<c[i+1]){
		d=c[i];
		c[i]=c[i+1];
		c[i+1]=d;
	}
	}r=0; f=0;
	for(i=0;i<n;i++){
		r+=b[i]*pow(10,(n-i-1));
		f+=c[i]*pow(10,(n-i-1));
		
	}
	if(pow(e,2)==pow((r-f),2)) break;
	else if(f>r) r=f-r;
	else         r=r-f;
	}
	cout<<"dordreqemli koprekar eded: "<<e;
	return 0;
}
