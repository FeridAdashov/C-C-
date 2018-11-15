#include<iostream>
using namespace std;
int main(){
	int n,i,s=0;
	cout<<"massivin olcusunu gir: ";
	cin>>n;
	int a[n],b[n];
	cout<<"a massivini gir:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"b massivini gir:\n";
	for(i=0;i<n;i++)
	cin>>b[i];
	for(i=0;i<n;i++)
	a[i]=a[i]+b[i];
	cout<<"bu massivlerin cemi olan massiv:\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;}
