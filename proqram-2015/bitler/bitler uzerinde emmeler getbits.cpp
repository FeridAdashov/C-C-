#include<iostream>
using namespace std;
int getbits(unsigned x,int p,int n){
	x=((x<<(32-p-1))>>(32-p-1))>>(p-n+1);
	return x;	
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
