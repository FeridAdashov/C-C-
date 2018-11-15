#include<iostream>
#include<cmath>
using namespace std;
void tesvir(unsigned short x){
	int i;
for(i=15;i>=0;i--){
cout<<(((x>>i)%2) ? '1':'0')<<" ";
if(i%8==0)cout<<endl;}
}
int main(){
	unsigned short x=0;
	int i,n,k=0,t,p,m;
	cin>>n;
	while(k!=n){
	for(i=15;i>7;i--){
	t=pow(2,i);     p=pow(2,15-i);
	if((x<(x^t) && x>(x^p)) || (x>(x^t) && x<(x^p)))
	break;
	}
	if(i==7){
	cout<<"\n"<<x<<"\n"; 
	tesvir(x);
	k++;}
    x++;
	}
	return 0;
}
