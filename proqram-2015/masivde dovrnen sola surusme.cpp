#include<iostream>
using namespace std;
int main(){
int n,i,k,j=0;	
cin>>n; int a[n],b[n];
for(i=0;i<n;i++)
cin>>a[i];
cin>>k;
for(i=n-1;i>=0;i--){
	if(i-k>=0)
	b[i-k]=a[i];	
	else b[n+i-k]=a[i];
}
for(i=0;i<n;i++)
cout<<b[i]<<" ";

	return 0;
}
