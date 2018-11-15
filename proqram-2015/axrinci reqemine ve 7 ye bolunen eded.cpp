#include<iostream>
using namespace std;
int main(){
	int k,i;
	for(i=100;i<1000;i++)
	{
		k=i%10;
		if(i%7==0 && i%k==0)
		cout<<i<<"\n";
	}
	
	return 0;
}
