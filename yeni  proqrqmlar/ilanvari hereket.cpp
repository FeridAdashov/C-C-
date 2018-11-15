#include<iostream>
using namespace std;
int main(){
int n,i,k,j=0,m,t;
char c,d;	
cout<<"~~~~~~~~~PROQRAM MASSIVDE ILANVARI HEREKETI YERINE YETIRIR~~~~~~~~\n\nMassivin olcusun gir: ";
cin>>n;
int a[n*n],b[n*n];
cout<<"Massivi daxil edin:\n";
for(i=0;i<n*n;i++)
cin>>a[i];
do{
cout<<"Saga hereket edek ya sola?(r/l)";
cin>>c;
switch(c){
case 'r':
		{	
			for(i=0;i<n*n;i++)
			{
			if(i%n==0 && (i/n)%2==1){
			m=0;
			for(t=i;t<(i+n+i)/2;t++)
			{swap(a[t],a[i+n-1-m]); m++;}
			}
			}
	
		j=0;
		cout<<"Addim sayini gir: ";
		cin>>k; k%=n*n;
		for(i=0;i<n*n;i++){
		if(i+k<n*n)
		b[i+k]=a[i];	
		else {
		b[j]=a[i];
		j++; }
		}
		for(i=0;i<n*n;i++)
		{
			if(i%n==0 && (i/n)%2==1){
			m=0;
			for(t=i;t<(i+n+i)/2;t++)
			{
				swap(b[t],b[i+n-1-m]); m++;	
			}
			}
		}
		for(i=0;i<n*n;i++)
		{
		if(i%n==0)cout<<endl;
		cout<<b[i]<<" ";
		a[i]=b[i];
		}
	}
		break;
case 'l':
	{		for(i=0;i<n*n;i++)
			{
			if(i%n==0 && (i/n)%2==1){
			m=0;
			for(t=i;t<(i+n+i)/2;t++)
			{swap(a[t],a[i+n-1-m]); m++;}
			}
			}
	
		j=0;
		cout<<"Addim sayini gir: ";
		cin>>k; k%=n*n;
		for(i=n*n-1;i>=0;i--)
		{
		if(i-k>=0)
		b[i-k]=a[i];	
		else b[n*n-k+i]=a[i];
		}
		for(i=0;i<n*n;i++)
		{
			if(i%n==0 && (i/n)%2==1){
			m=0;
			for(t=i;t<(i+n+i)/2;t++)
			{
				swap(b[t],b[i+n-1-m]); m++;	
			}
			}
		}
		for(i=0;i<n*n;i++)
		{
		if(i%n==0) cout<<endl;
		cout<<b[i]<<" "; 
		a[i]=b[i];
		}
	}
		break;
	default:cout<<"\nDogru secim etmediniz...\n\n";
}
	cout<<"\n\nDavam edekmi?(h/y) "; cin>>d;
}while(d=='h' || d=='H');
	return 0;
}
