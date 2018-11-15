#include<iostream>
#include<cmath>
using namespace std;
void tesvir(unsigned x){
	int i;
for(i=31;i>=0;i--){
cout<<(((x>>i)%2) ? '1':'0')<<" ";
if(i%8==0)cout<<endl;}
}
int main(){
	unsigned x;
	int p,n,i,t;
	cout<<"Ededdeki bitlerin eksi\nEdedi daxil et: ";
	cin>>x;
	cout<<"Bu ededin yaddasdaki tesviri:\n"; tesvir(x);
	cout<<"\nBaslangic movqeyi daxil et(axirdan): ";
	cin>>p;
	cout<<"\nNece movqe deyisdirilsin?: ";
	cin>>n;
	for(i=0;i<n;i++){
	t=pow(2,(p-i));
		x=x^t;
	}
	cout<<"Deyismeden sonraki tesvir:\n";tesvir(x);
	cout<<"\nVerilen movqedeki bitlerin eksinden sonraki eded: "<<x;
	return 0;
}
