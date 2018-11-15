#include<iostream>
using namespace std;
int main(){
	int n,i,j=0,k,p,t;
	cout<<"Element sayini daxil et: ";
	cin>>n;
	char a[n];
	cout<<"Coxlugu daxil et: ";
	for(i=0;i<n;i++)
	cin>>a[i];	
	cout<<"Alt coxluqlar:\n";
	for(i=0;i<n;i++){
	for(j=i;j<n;j++){  t=1; b:
	for(k=i;k<=j;k+=t)
	cout<<a[k]<<" ";
	cout<<endl;

	}
	}
//	cout<<"\n\n"<<j<<"  Sayda alt coxluq var...";
	return 0;
}
