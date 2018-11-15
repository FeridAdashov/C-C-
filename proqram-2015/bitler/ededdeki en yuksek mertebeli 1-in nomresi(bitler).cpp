#include<iostream>
using namespace std;
void tesvir(unsigned x){
	int i;
for(i=31;i>=0;i--){
cout<<(((x>>i)%2) ? '1':'0')<<" ";
if(i%8==0)cout<<endl;}
}
void nomre(unsigned x){
	int i,k;
	for(i=31;i>=0;i--)
	if((x>>i)==1){
	k=i+1;
	break;	
	}
	cout<<"\nBu 1 basdan "<<33-k<<" -ci yerde,axirdan "<<k<<" -ci yerde yerlesir...";
}
int main(){
	unsigned x;
	cout<<"En yuksek mertebeli 1-in nomresi...\n";
	cout<<"Ededi daxil et: ";
	cin>>x;
	cout<<"Tesvir:\n";  tesvir(x);
	nomre(x);
	return 0;
}
