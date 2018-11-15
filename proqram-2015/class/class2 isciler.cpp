#include<iostream>
#include<iomanip>
using namespace std;
class isciler{	
string isci_adi,isci_soyad;
	int yas,maas;
	public:
		void bilgi_gir(){static int say=1;
		cout<<"\n"<<say<<" -ci iscinin adini gir: "; cin>>isci_adi;	
		cout<<say<<" -ci iscinin soyadini gir: ";    cin>>isci_soyad;
		cout<<say<<" -ci iscini yasini gir: ";       cin>>yas;
		cout<<say<<" -ci iscini maasini gir: ";      cin>>maas;
		say++;}
		void goster(){static int s=0;
		if(s==0)
			cout<<"\n\n"<<setw(15)<<"AD"<<setw(15)<<"SOYAD"<<setw(15)<<"YAS"<<setw(15)<<"MAAS\n\n";
			cout<<setw(15)<<isci_adi<<setw(15)<<isci_soyad<<setw(15)<<yas<<setw(15)<<maas<<endl;
			s++;
		}
};
int main(){
int i,n;
cout<<"Isci sayini girin: "; cin>>n;
isciler isci[n];
for(i=0;i<n;i++)
	isci[i].bilgi_gir();
	for(i=0;i<n;i++)
	isci[i].goster();
	return 0;
	}
