#include<iostream>
using namespace std;
void ikilik(unsigned x){int i;
for(i=31;i>=0;i--){
cout<<(((x>>i)%2)? '1' : '0')<<" ";
if(i%8==0)cout<<endl;
}
}
void getbit(unsigned a,int b,int c){
cout<<"\n\nCAVAB: "<<(((a<<(b-1))>>(b-1))>>(33-b-c));
}
int main(){
unsigned x;
int p,n;
cout<<"BITLER UZERINDE EMELLER...\nEDEDI DAXIL ET: ";
cin>>x; ikilik(x);
cout<<"\n\nBASDAN NECENCI MOVQEDEN HESABLASIN: ";
cin>>p;
cout<<"NECE MOVQE HESABLANSIN: ";
cin>>n;
getbit(x,p,n);
	return 0;
}
