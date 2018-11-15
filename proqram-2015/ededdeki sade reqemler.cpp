#include<iostream>
using namespace std;
int sadeeded(int n){
	int i;
	for(i=2;i<=n;i++)
	if(n%i==0)
	break;
	if(i==n) return 1;
	else return 0;
}

int main(){
	int n,k;
	cout<<"ededi daxil et: ";
	cin>>n;
	while(n>0){
	if(sadeeded(n%10)==1)
	cout<<n%10<<' ';
	n/=10;		
	}
return 0;	
}
