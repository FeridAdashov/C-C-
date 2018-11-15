#include<iostream>
using namespace std;
int main(){
	int a[2][2],b[2][2],c[2][2],i,j,s,k;
	cout<<"A matrisini gir:\n";
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	cin>>a[i][j];
	
	cout<<"B matrisini gir:\n";
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	cin>>b[i][j];
	cout<<endl;
	for(k=0;k<2;k++)
	for(i=0;i<2;i++){s=0;
	for(j=0;j<2;j++)
	s+=a[k][j]*b[j][i];
	c[k][i]=s;
	}
			
	for(i=0;i<2;i++){
	for(j=0;j<2;j++)
		cout<<c[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
