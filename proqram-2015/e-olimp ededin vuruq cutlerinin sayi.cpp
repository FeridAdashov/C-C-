#include<iostream>
using namespace std;
int main(){
	int n,k,i,s=0;
	cin>>n;
	for(i=1;n!=s;i++){s=1;
	for(k=1;k<=i/2;k++)
	if(i%k==0)
	s++;
	if(s%2==1) s++;
	s/=2;
}
i--;
cout<<i;
return 0;
//BY CABBAR
}
