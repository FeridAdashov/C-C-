#include<iostream>
using namespace std;
int main(){
	int n,i,s=0;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cin>>b[i];
	cout<<"\n";
for(i=0;i<n;i++)
 s=s+a[i]*b[i];
 cout<<s;
 return 0;
}
