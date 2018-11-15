#include<iostream>
using namespace std;
int main(){
	int n,i,max,k;
	cout<<"massivin olcusunu daxil et: ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	max=a[0];
	for(i=0;i<n;i++)
	if(a[i]>=max)
	k=i;
	cout<<a[k]<<"--"<<k;	
	return 0;
}
