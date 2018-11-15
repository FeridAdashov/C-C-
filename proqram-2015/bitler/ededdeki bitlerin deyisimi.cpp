#include<iostream>
#include<cmath>
using namespace std;

int change_bit(unsigned x){
	int i,t,k;
	unsigned y=x;
	for(i=0;i<31;i++){
		t=pow(2,i);
		k=pow(2,i+2);
		if(x>(x^t) && x>(x^k) && x<(x^(t*2)))
		y=y^(t*2);
		if(x<(x^t) && x<(x^k) && x>(x^(t*2)))
		y=y^(t*2);
	}
	return y;
	
}
void tesvir(unsigned x){
	int i;
for(i=31;i>=0;i--){
cout<<(((x>>i)%2) ? '1':'0')<<" ";
if(i%8==0)cout<<endl;}
}
int main(){
	unsigned x;
	cout<<"Qonsu bitleri 0 olan biti 0 ve 1 olanlari 1-e cevirmek\n";
	cout<<"Ededi daxil et: ";
	cin>>x;
	cout<<"Tesvir:\n"; tesvir(x);
	cout<<"\n\n"<<change_bit(x)<<"\nTesviri:\n";
	tesvir(change_bit(x));	
	return 0;
}
