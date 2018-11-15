#include<iostream>
using namespace std;
int sur(int *p,int n,int k){
	int i,a[n],b[n];
for(i=0;i<n;i++)
    a[i]=*(p+i);
	for(i=n-1;i>=0;i--){
	if(i-k>=0)
	b[i-k]=a[i];	
	else b[n-k+i]=a[i];
}
for(i=0;i<n;i++)
*(p+i)=b[i];
}
int main(){
int n,i,k,j=0;	
cout<<"massivin dovrle saga surusmesi...\nmassivin olcusun gir: ";
cin>>n; int a[n],b[n];
cout<<"massivi daxil et:\n";
for(i=0;i<n;i++)
cin>>a[i];
cin>>k;
sur(&a[0],n,k);
for(i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
