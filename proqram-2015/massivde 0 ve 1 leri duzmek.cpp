#include<iostream>
#include<cmath>
using namespace std;
int main(){int i,n,k=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n+k;i++)
	{
		if(i<n)
		{
		 if(a[i]==1)
			k++;
		   a[i]=0;			
		}
		else a[i-k]=1;
	
	}
		for(i=0;i<n;i++)
	    cout<<a[i]<<' ';
	
	return 0;
}
//SAXURES
