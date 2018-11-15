#include<iostream>
#include<cmath>
using namespace std;
int main()
{	int n,k,m,t;
	cin>>n;
	m=n;
	while(n>0)
	{k++;
	n=n/10;
	}
	t=pow(10,k-1);
	m=m%10*pow(10,k-1)+m%t-m%10+m/t;
	cout<<m;
	return 0;
}
