#include<iostream>
using namespace std;
#define n 4
int main(){
	
	int i,j;
	int a[n][n];
	
	cout<<"Massivin olcusu: "<<n<<"\nMassivi daxil et:\n";
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(i==j || i+j==n-1)
		a[i][j]=0;
	}
	
	cout<<"Yeni massiv:\n";
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;}
	return 0;
}
