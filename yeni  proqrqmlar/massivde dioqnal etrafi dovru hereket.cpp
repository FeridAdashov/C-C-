#include<iostream>
using namespace std;
int main(){
	int n,i,j,k;
	cin>>n;      int a[n][n],b[n-2];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	
	for(i=1;i<n-1;i++)
	b[i-1]=a[0][i];
	
	for(i=1;i<n-1;i++)
	swap(a[i][n-1],b[i-1]);
	
	for(i=1;i<n-1;i++)
	swap(a[n-1][i],b[i-1]);
	
	for(i=1;i<n-1;i++)
	swap(a[i][0],b[i-1]);
	
	for(i=1;i<n-1;i++)
	swap(a[0][i],b[i-1]);
	cout<<endl;
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;}
	return 0;
}
