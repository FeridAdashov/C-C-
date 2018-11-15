#include<iostream>
using namespace std;
int main(){
	int a[2][2],b[2][2],s=0,i,j;
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	cin>>a[i][j];
	
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	cin>>b[i][j];
	
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	s+=a[i][j]*b[i][j];
	cout<<"\nCem: "<<s;
	return 0;
}
