#include<iostream>
using namespace std;
int main(){
	int n,i,s=0;
	cout<<"massivin olcusunu gir: ";
	cin>>n;
	int a[n],b[n],max[n],min[n],maxmin[n];
	cout<<"a massivini gir:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"b massivini gir:\n";
	for(i=0;i<n;i++)
	cin>>b[i];
	for(i=0;i<n;i++){
	if(i%2==0){
		if(a[i]>b[i]) maxmin[i]=a[i];
		else maxmin[i]=b[i];
	}
	else{
		if(a[i]>b[i]) maxmin[i]=b[i];
		else maxmin[i]=a[i];
	}
	if(a[i]>b[i]){
	max[i]=a[i];
	min[i]=b[i];}
	else {
	max[i]=b[i];
	min[i]=a[i];}} cout<<"\n\n";
	    for(i=0;i<n;i++)	cout<<max[i]<<" "; cout<<"\n";
		for(i=0;i<n;i++)    cout<<min[i]<<" "; cout<<"\n";
	    for(i=0;i<n;i++)    cout<<maxmin[i]<<" ";cout<<"\n";
	return 0;
}
