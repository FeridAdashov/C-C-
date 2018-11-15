#include<iostream>
using namespace std;
int main(){
int n,i,k,j=1,t,m,l,e=0;
cout<<"massivin olcusunu gir: ";
cin>>n; int a[n],b[n],c[n],d[n];
cout<<"massivi daxil et:\n";
for(i=0;i<n;i++){
cin>>a[i];
b[i]=0;
c[i]=0;
d[i]=0;} 
cout<<"surusme sayini giriniz: ";
cin>>k;
cout<<"surusme movqeyini girin: ";
cin>>m; i=m-1; l=m+1; b[m]=a[m];
for(t=0;t<n;t++){
	if(i-k>=0) b[i-k]=a[i];
	else if(j<=k && j<m+1){c[n-j]=a[i]; j++;}
	if(l+k<n)  b[l+k]=a[l];
	else if(e<k && e<n-m){ d[e]=a[l]; e++; }
	i--; l++;
}
for(i=0;i<n;i++)
cout<<c[i]<<" "; cout<<"  ";
for(i=0;i<n;i++)
cout<<b[i]<<" "; cout<<"  ";
for(i=0;i<n;i++)
cout<<d[i]<<" ";

return 0;
}
