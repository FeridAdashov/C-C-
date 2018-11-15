#include<iostream>
using namespace std;
const int n=100000;
int main(){
	int a[n]={0},i,j,k,t,m,f;
	a[n-1]=1;
	cout<<"~~~~~~~~~~~Yuksek dereceli faktorial hesabi~~~~~~~~~~~~~\nNece faktorial hesablansin? ";
	cin>>k;
	cout<<k<<" faktorialin qiymeti:\n";
	for(i=1;i<=k;i++)
	for(j=n-1;j>=0;j--)
	{	m=j;
		if(a[j]*i<10)a[j]*=i;
		else {
		t=(a[j]*i)/10;	
		a[j]=(a[j]*i)%10;
		if(a[j-1]+t<10) a[j-1]+=t;
		else
		while(t>0){
			f=(a[m-1]+t)/10;
			a[m-1]=(a[m-1]+t)%10;
			t=f;
			m--;
		}
		}
	}
	while(a[i]==0) i++;
	while(i<n)
	{
		cout<<a[i];
		i++;
	}
	
	return 0;
}

