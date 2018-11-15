#include<iostream>
using namespace std;
int main(){ 
	int i,j,n,m,s,p=1;
	cout<<"hasil ve cemin qarisiq dovru.\nhasilin dovr sayini daxil et: ";
	cin>>n;	
	cout<<"cemin dovr sayini daxil et: ";
	cin>>m;
	for(i=1;i<=n;i++){s=0;
	for(j=1;j<=m;j++)
	s+=(i+j);
	p*=s;}
	cout<<p;

	return 0;
}
