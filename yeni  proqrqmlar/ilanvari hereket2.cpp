#include<iostream>
using namespace std;
int main(){
int n,i,k,j=0,m,t,r;
char c,d;	
cout<<"~~~~~~~~~PROQRAM MASSIVDE ILANVARI HEREKETI YERINE YETIRIR~~~~~~~~\n\nMassivin olcusun gir: ";
cin>>n;
int a[n][n],b[n][n];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
do{
	cout<<"Saga hereket yoxsa sola?(r/l) "; cin>>c;
	if(c=='l' || c=='L')
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	swap(a[i][j],a[n-i-1][n-j-1]);
 cout<<"addim sayini girin: "; cin>>k;
 j=0;
 for(i=n-k;i<n;i++){
 	b[0][j]=a[n-1][i];
	j++;
	}
	r=0;
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	{	
		if(r==n && t==n-1) break;
		if(i==0 && j==0) t=t+k;
		b[r][t]=a[i][j];
		if(t==n-1){
		r++; t=0;}
		else t++;
	}}
	
	for(i=0;i<n;i++)
	for(j=0;j<n/2;j++)
		{
			if(i%n==1)
			swap(b[i][j],b[i][n-j-1]);
		}
	if(c=='l' || c=='L')
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	swap(a[i][j],a[n-i-1][n-j-1]);
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
		cout<<b[i][j]<<" ";
		cout<<endl;
		a[i][j]=b[i][j];
	}
	cout<<"\n\nDavam edekmi?(h/y) "; cin>>d;
}while(d=='h' || d=='H');
	return 0;
}
