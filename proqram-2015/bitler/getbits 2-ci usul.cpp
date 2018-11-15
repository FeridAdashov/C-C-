#include<iostream>
#include<cmath>
using namespace std;
int getbits(unsigned x,int p,int n){
int i,t,s=0;
	for(i=p;i>p-n;i--){
	t=pow(2,i);
	if((x^t)<x)
	s=s*2+1;
	else s=s*2;
}	return s;
}
void tesvir(unsigned x){
	int i;
for(i=31;i>=0;i--){
cout<<(((x>>i)%2) ? '1':'0')<<" ";
if(i%8==0)cout<<endl;}
}
int main(){
	unsigned x;
	int p,n;
	cout<<"Ededi daxil et: "; cin>>x;
	cout<<"Ededin tesviri:\n";
	tesvir(x);
	cout<<"Hesablanma baslangicini gir: "; cin>>p;
	cout<<"Bit sayini gir: "; cin>>n;
	cout<<"Cavab: "<<getbits(x,p,n);
	return 0;
} 
