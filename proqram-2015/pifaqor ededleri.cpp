#include<iostream>
using namespace std;
int main(){
int n,a=0,i,j;
cout<<"pifaqor cutluklerinin sayin daxil et: ";
cin>>n;
	for(a=1;n>0;a++){
	for(i=1;i<=a;i++)
	for(j=1;j<=a;j++)
	if(a*a==i*i+j*j){
	cout<<a<<" , "<<i<<" , "<<j<<"\n";
	n--;
	goto son;
	} 
	son:;
	}
	return 0;
}
