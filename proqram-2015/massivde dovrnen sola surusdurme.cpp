#include<iostream>
using namespace std;
int main(){
int n,i,k;	
cout<<"massivin dovrle sola surusmesi...\nmassivin olcusun gir: ";
cin>>n; int a[n],b[n];
cout<<"massivi daxil et:\n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"surusme sayini gir: ";
cin>>k;
for(i=n-1;i>=0;i--){
	if(i-k>=0)
	b[i-k]=a[i];	
	else b[n-k+i]=a[i];
}
for(i=0;i<n;i++)
cout<<b[i]<<" ";

	return 0;
}
