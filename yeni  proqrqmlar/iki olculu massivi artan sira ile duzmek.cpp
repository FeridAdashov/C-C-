#include<iostream>
using namespace std;
int main(){
	int i,j,n,k,kecid;
	cout<<"Olcunu daxil edin: "; cin>>n;
	int a[n][n];
	cout<<"Massivi daxil et:\n";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	
	for(k=0;k<n*n;k++)
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
		if(a[i][j]>a[i][j+1] && j!=n-1)
		{
			kecid=a[i][j];
			a[i][j]=a[i][j+1];
			a[i][j+1]=kecid;
		}
		else if(j==n-1 && i!=n-1 && a[i][j]>a[i+1][0])
			{
			kecid=a[i][j];
			a[i][j]=a[i+1][0];
			a[i+1][0]=kecid;
			}
	}
	cout<<"\nDuzlenmis massiv:\n\n";
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
	}
	return 0;
}
