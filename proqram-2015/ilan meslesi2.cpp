#include<iostream>
using namespace std;
int main(){
	int i,j,n,t,k,l,z;
	char p,h='h';
	cout<<"olcunu gir: "; cin>>n;
	int a[n][n];
	cout<<"massivi gir:\n";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	while(h=='h' || h=='H'){
	cout<<"saga hereket yoxsa sola(r/l): "; cin>>p;
	if(p=='r' || p=='R'){
	cout<<"addim sayini gir: "; cin>>k;
	int b[k],c[k];
	for(z=0;z<k;z++)
	c[z]=a[n-1][n-z-1];
	for(i=0;i<n;i++){l=0;
	for(j=n-1;j>=0;j--){
		if(j+k<n)
		a[i][j+k]=a[i][j];
		else {b[l]=a[i][j]; l++;}
		}
		for(z=k-1;z>=0;z--)
		a[i][z]=c[k-z-1];
		for(z=0;z<k;z++)
		c[z]=b[z];
}
for(i=0;i<n;i++){ cout<<endl;
for(j=0;j<n;j++)
cout<<a[i][j]<<" ";
} cout<<"\n\n";
}
else if(p=='l' || p=='L'){
	cout<<"addim sayini gir: "; cin>>k;
	int b[k],c[k];
	for(z=0;z<k;z++)
	c[z]=a[0][z];
	for(i=n-1;i>=0;i--){l=0;
	for(j=0;j<n;j++){
		if(j-k>=0)
		a[i][j-k]=a[i][j];
		else {b[l]=a[i][j]; l++;}
		}
		for(z=k-1;z>=0;z--)
		a[i][n-z-1]=c[k-z-1];
		for(z=0;z<k;z++)
		c[z]=b[z];
}
for(i=0;i<n;i++){ cout<<endl;
for(j=0;j<n;j++)
cout<<a[i][j]<<" ";
} cout<<"\n\n";
}cout<<"Yeniden emeliyyat aparilsinmi(h/H): "; cin>>h;
}
	return 0;
}
