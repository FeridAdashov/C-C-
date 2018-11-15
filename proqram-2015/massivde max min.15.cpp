#include<iostream>
#define ulduz cout<<"\n\t\t*********************************";
using namespace std;
int main(){
	int n,i,max,min;
	ulduz;
	cout<<"\nmassivin olcusunu daxil et: ";
	cin>>n;
	int a[n];
	cout<<"massivi daxil et:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	if(a[i]>max) max=a[i];
	else if(a[i]<min) min =a[i];
	cout<<"max = "<<max<<"\nmin = "<<min;
	ulduz;
	return 0;
}
