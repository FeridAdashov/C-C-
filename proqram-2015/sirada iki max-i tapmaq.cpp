#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,s=0,k,i,max,max1;
	cout<<"eded sayini daxil et: ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	max=a[0];
	max1=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max1=max;
			max=a[i];
		}
		else if(max1>a[i+1])			
		max1=a[1];
	}
	cout<<max<<" "<<max1;
	return 0;
}
