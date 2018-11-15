#include<iostream>
using namespace std;
int main(){
	int n,i;
	float s=0,p=1;
	cout<<"massivin olcusun gir: ";
	cin>>n; int a[n];
	cout<<"massivi gir:\n";
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n;i++)
	if((i+1)%2==1) s+=a[i]*a[i];
	else p*=a[i];
	cout<<s/p;
	return 0;
}
