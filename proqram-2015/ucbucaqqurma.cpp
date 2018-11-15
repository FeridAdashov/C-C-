#include<iostream>
using namespace std;
int main(){
	int i,j,k,t,h;
	cin>>h;
	h *= 2;
	
	for(i=h;i>0;i-=2){
	for(k=0;k<i/2;k++)
	cout<<" ";
	
	for(t=0;t<=h-i;t++)
	cout<<"*";
	
	cout<<"\n";
}
	return 0;
	}
