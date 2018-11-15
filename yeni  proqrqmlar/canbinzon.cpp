#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],i,j,k,s,t;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>t;
	k=pow(2,n);
	for(i=0;i<k;i++){
	s=0;
	for(j=0;j<n;j++)
	{
		if((i>>j)%2==1) s++;
	}
	if(s==t){
	for(j=0;j<n;j++)
	{
		if((i>>j)%2==1)
		cout<<a[j]<<" ";
	}
	cout<<endl;
	}
	}
	return 0;
}
