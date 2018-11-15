#include<iostream>
#include<iomanip>
using namespace std;
struct telebe{
	char ad[15],soyad[15];
	int bal;
};
int main(){
int i,j;
struct telebe Telebe[3],a;
cout<<"          ~~~~~~~~~~~TELEBE STATISTIKASI~~~~~~~~~~~~~\n\n";
for(i=0;i<3;i++)
{
	cout<<i+1<<" -ci telebenin adi: "; cin>>Telebe[i].ad;
	cout<<"Soyadi: "; cin>>Telebe[i].soyad;
	cout<<"Bal: ";    cin>>Telebe[i].bal;
	cout<<endl;
}
for(i=0;i<3;i++)
for(j=0;j<2;j++)
if(Telebe[j].bal<Telebe[j+1].bal){
	a=Telebe[j];
	Telebe[j]=Telebe[j+1];
	Telebe[j+1]=a;
}cout<<"          ~~~~~~~~~Telebelerin bala gore duzulusu~~~~~~~~~\n\n";
 cout<<setw(20)<<"AD"<<setw(20)<<"SOYAD"<<setw(20)<<"BAL\n\n";
for(i=0;i<3;i++)
	cout<<setw(20)<<Telebe[i].ad<<setw(20)<<Telebe[i].soyad<<setw(20)<<Telebe[i].bal<<endl;
cout<<"\nBY SAXURES";
	return 0;
}
