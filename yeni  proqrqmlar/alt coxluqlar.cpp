#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main(){
	int n,i,j,k,t;
	char s;
	time_t x,y;
	x=clock();
	struct tm *zaman;
	time (&y);
	zaman=localtime(&y);
	cout<<"            INDIKI ZAMAN VE TARIX : "<<asctime(zaman)<<"\n\n";
	cout<<"~~~~~~~~~~~~PROQRAM VERILMIS COXLUQUN ALT COXLUQLARINI TAPIR~~~~~~~~~~\n\n";
do{
	cout<<"ZEHMET OLMASA COXLUGUN ELEMENT SAYINI DAXIL EDIN: ";
	cin>>n;
	char a[n];
	cout<<"\nCOXLUGUN ELEMENTLERINI DAXIL EDIN: ";
	for(i=0;i<n;i++)
	cin>>a[i];
	k=pow(2,n);
	cout<<"\nPROQRAMDA "<<k<<" sayda alt coxluq var:\n";
	for(i=0;i<k;i++){t=0;
	for(j=n-1;j>=0;j--)
	{
		if((i>>j)%2==0) t++;
		if((i>>j)%2==1)
		cout<<a[j]<<" ";
	}   if(t==n) cout<<"Bos coxluq";
		cout<<endl;
	}
	cout<<"\nYENIDEN HESABLAMA APARACAQSINIZMI?(H/Y) "; cin>>s;
}while(s=='h' || s=='H');
	cout<<"\n\nSIZ "<<(clock()-x)/(double)CLOCKS_PER_SEC<<"  SANIYE PROQRAMDA ISLEMISINIZ...";
	cout<<"\n\nSAGOLUN....\nBY SAXURES...";
		return 0;
}
