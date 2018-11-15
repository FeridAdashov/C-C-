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
	int n,i,k;
	cin>>n;
	for(i=1;i<=n;i++)
	if(n%i==0 && sadeeded(i)==1){
	k=i;
	break;}
	cout<<k;
	return 0;
}
