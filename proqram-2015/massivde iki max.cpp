#include<iostream>
using namespace std;
int main(){
	int n,i,max,max1;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	max=a[0];
	max1=a[1];
	for(i=1;i<n;i++){
		if(max<a[i])
	{
		max1=max;
		max=a[i];
	}
		else if (a[i]>max1) 
		max1=a[i];
	}
	cout<<max<<"\n"<<max1;
	return 0;
}
//BY SAXURES
