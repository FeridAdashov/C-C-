#include<iostream>
using namespace std;

class tel_no{
	string ad,no;
	public:
	tel_no(string a,string n){
		ad=a; no=n;
	}
	string nogetir(){
		return no;
	}
	string adgetir(){
		return ad;
	}
};

int main(){
	tel_no a[5]={tel_no("nigar","0556163778"),tel_no("ferid","0705373267"),
	tel_no("nubar","0556271747"),tel_no("feride","0559319884"),tel_no("jabbar","0708896490")};
	int i;
	string b;
	cout<<"ad gir: "; cin>>b;
	for(i=0;i<5;i++)
	if(a[i].adgetir()==b) cout<<a[i].adgetir()<<"-in nomresi: "<<a[i].nogetir();
	return 0;
}
