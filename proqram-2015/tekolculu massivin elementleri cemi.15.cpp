#include<iostream>
using namespace std;
int main(){
	int n,i,s=0;
	cout<<"massivin olcusunu gir: ";
	cin>>n;
	int a[n];
	cout<<"massivi gir:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	s+=a[i];
	cout<<"massivin elementleri cemi: "<<s;	
	return 0;
}
