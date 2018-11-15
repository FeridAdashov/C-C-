#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int i,j;

for(i=1;i<=10;i++){
for(j=1;j<=10;j++){
	cout<<j<<"*"<<i<<" = "<<i*j<<" ";
	if(i<10)cout<<" ";
	if(j<10)cout<<" ";
	if(i*j<10)cout<<" ";
	
}
	cout<<endl;
}
	return 0;
}
