#include<iostream>
using namespace std;
int main(){int n,i,j=0 ,k;
cout<<"massivin olcusun gir: ";
cin>>n;
int a[n],b[n+1];
cout<<"massivi daxil et: ";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"daxil olunacaq ededi daxil et: ";
cin>>k;
for(i=0;i<n;i++)
{
if(i==0 && a[i]>=k){
	 b[j]=k;
	 b[j+1]=a[i];
 	 j++;
	}
else if(a[i]>=k && k>a[i-1]){
	 b[j]=k;
	 b[j+1]=a[i];
	 j++;
}
if(i==n-1 && a[i]<k){
	 b[j]=a[i];
	 b[j+1]=k;
	 }
	 b[j]=a[i];
	 j++;
} 
for(i=0;i<n+1;i++)
cout<<b[i]<<" ";
return 0;
}
