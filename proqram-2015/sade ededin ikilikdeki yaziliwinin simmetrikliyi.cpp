#include<iostream>
using namespace std;

int sade(int n){int i;
	for(i=2;i<=n;i++)
	if(n%i==0)break;
	if(i==n)return 1;
	else return 0;	
}

int main(){
	int n,i,j;
	cin>>n;
	for(i=2;i<n;i++){
	j=i;
	if(sade(i)==1){
		while(j>0){
			if(j%2==j/2%2)break;
			j/=2;
		}
	} if(j==0) cout<<i<<"\n";
}	
	return 0;
}
