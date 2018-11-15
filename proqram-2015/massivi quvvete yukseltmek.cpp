#include<iostream>
using namespace std;

void yukselt(int *p,int *q,int n){
	int i,j,b[n][n],t,k;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{t=0;
		for(k=0;k<n;k++)
		t+=*(p+n*i+k)**(q+k*n+j);
		b[i][j]=t;
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		*p=b[i][j];
		p++;
	} 
}

int main(){
	int i,j,n,k;
	cout<<"massivin olcusun gir: ";
	cin>>n; int a[n][n],b[n][n];
	cout<<"\nmassivi gir:\n";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++){
	cin>>a[i][j];
	b[i][j]=a[i][j];}
	cout<<"\nquvvet ustunu gir: "; cin>>k;
	while(k>1){
	yukselt(&a[0][0],&b[0][0],n);
	k--;
	}
	cout<<"\nquvvetden sonraki massiv:\n";
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
	}
	return 0;
}
