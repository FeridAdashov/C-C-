//iscilerin 10 il sonraki yas ve maasi
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct isci{
	string ad,soyad;
	int yas;
	float maas;
};
struct isci hesab(struct isci x){
	int i;
	x.yas+=5;
	for(i=0;i<5;i++)
	x.maas+=x.maas/10; //maasin illik artimi 10% dir
	return x;
}
int main(){
	int i,j;
	struct isci el[2];
	for(i=0;i<2;i++){
		cout<<i+1<<" -ci iscinin adi: "; getline(cin,el[i].ad);
		if(i!=0)
		getline(cin,el[i].ad);
		cout<<el[i].ad<<" -in soyadi: "; getline(cin,el[i].soyad);
		cout<<el[i].ad<<" -in yasi: ";   cin>>el[i].yas;
		cout<<el[i].ad<<" -in maasi: ";  cin>>el[i].maas;
		cout<<"\n";
		el[i]=hesab(el[i]);
	}cout<<"\n\n~~~~~~~~~~~~~~~~~~~BES ILLIK HESABAT~~~~~~~~~~~~~~~~~~\n\n";
	 cout<<setw(15)<<"AD"<<setw(15)<<"SOYAD"<<setw(15)<<"YAS"<<setw(15)<<"MAAS\n";
	for(i=0;i<2;i++){
	cout<<setw(15)<<el[i].ad<<setw(15)<<el[i].soyad<<setw(15)<<el[i].yas<<setw(15)<<el[i].maas<<"\n";
	}
	return 0;
}
