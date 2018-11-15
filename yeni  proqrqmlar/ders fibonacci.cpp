#include<iostream>
using namespace std;
int main(){
	int a=1,b=0,d[15],i;
	for(i=0;i<15;i++)
	{
		d[i]=a+b;
		a=b;
		b=d[i];
	}
	
		for(i=0;i<15;i++)
		cout<<d[i]<<" ";
	
	return 0;
}
