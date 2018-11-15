#include<iostream>
using namespace std;
int main(){
	int i,j,k,a,b,c,t=0,n;
	cin>>n;
	for(i=1;i<=9;i++){
	for(j=0;j<=9;j++)
	for(k=0;k<=9;k++)
	for(a=0;a<=9;a++)
	for(b=0;b<=9;b++)
	for(c=0;c<=9;c++)
	if(i+j+k==a+b+c)
	t++;
	if(n==t)
	break;
	}
	cout<<n<<"-ci: "<<i<<j<<k<<a<<b<<c;
	return 0;
}
