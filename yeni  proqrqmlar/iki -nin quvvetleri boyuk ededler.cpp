#include<iostream>
using namespace std;
const int n=10000;
int main(){
	char b;
	cout<<"~~~~~~~~~~2-NIN YUKSEK QUVVETLERINI HESABLAMA PROQRAMI~~~~~~~~~~\n\n";
	
	do{
	int a[n]={0},i,j,k;
	a[n-1]=1;
	cout<<"QUVVETI DAXIL EDIN: ";
	cin>>k;
	cout<<"\n2-NIN "<<k<<" -CI QUVVETI:\n";
	for(i=0;i<k;i++)
	for(j=0;j<n;j++)
	{
	if(a[j]*2<10) a[j]*=2;
	else {
		a[j]=(a[j]*2)%10;
	a[j-1]+=1;
	}
	}
	i=0;
	while(a[i]==0) i++;
	while(i<n)
	{
		cout<<a[i];
		i++;
	}
	cout<<"\n\nYENIDEN HESABLAMA APARACAQSINIZMI?(H/Y) "; cin>>b;
}while(b=='h' || b=='H');
cout<<"\n\nSAGOLUN....\nBY SAXURES...";
	return 0;
}
