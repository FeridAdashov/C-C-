#include<iostream>
using namespace std;
int main(){
int n,i,k,j=0;	
cout<<"massivin dovrle saga surusmesi...\nmassivin olcusun gir: ";
cin>>n; int a[n],b[n];
cout<<"massivi daxil et:\n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"surusme sayini gir: ";
cin>>k;
for(i=0;i<n;i++){
	if(i+k<n)
	b[i+k]=a[i];	
	else {
	b[j]=a[i];
	j++; }
}
for(i=0;i<n;i++)
cout<<b[i]<<" ";

	return 0;
}
