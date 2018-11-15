#include<iostream>
using namespace std;
int sade(int n){int i;
for(i=2;i<=n;i++)
if(n%i==0)break;
if(n==i) return 1;
else return 0;
}
int main(){
	int n,i,j=0;
	cout<<"massivin olcusun gir: ";
	cin>>n;  int a[n],b[n];
	cout<<"massivi gir:\n";
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n;i++)
	if(sade(i)==1){
	b[j]=a[i];
	j++;
	}j--;
	for(i=0;i<n;i++)
	if(sade(i)==0){
		b[j]=a[i];
		j++;
	}
	for(i=0;i<n;i++)
	cout<<b[i]<<" ";
	return 0;
}
