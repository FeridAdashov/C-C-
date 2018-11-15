#include<iostream>
using namespace std;
int sade(int n){int i;
	for(i=2;i<=n;i++)
	if(n%i==0)break;
	if(n==i) return 1;
	else return 0;
}
int main(){
int n,i,s=0;
cout<<"massivin olcusunu gir: ";
cin>>n; int a[n];
cout<<"massivi daxil et:\n";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
if(sade(a[i])==1) s+=i;
cout<<"sade elementlerin indeksleri cemi = "<<s;
return 0;
}
