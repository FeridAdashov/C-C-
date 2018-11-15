#include<iostream>
using namespace std;
int main(){
int n,i,j,s=0;
cin>>n;

for(i=1;n>0;i++){  s=0;
for(j=1;j<i;j++)
	if(i%j==0)
	s+=j;
	if(s==i) {
	for(j=1;j<i;j++)
	if(i%j==0) 
	cout<<j<<" + ";
	cout<<" = "<<i<<"\n";
	n--;
	}
	}
return 0;
}
