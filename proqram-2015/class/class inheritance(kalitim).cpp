#include<iostream>
using namespace std;

class umumi{
	public:
	string nov,sahe_vahid;
	int sahe;
	void sa_va_gir(){
		cout<<"Sahe vahidini gir: "; cin>>sahe_vahid;
	}
	void sahe_goster(){
		cout<<nov<<"-in sahesi "<<" "<<sahe<<" "<<sahe_vahid<<"-dir.\n";
	}
};

class kvadrat:public umumi{
	public:
		int teref;
		kvadrat(){
			nov="Kvadrat";
		}
		void terefgir(){
			cout<<"Kvadratin terefini gir:"; cin>>teref;
		}
		void sahehesab(){
			sahe=teref*teref;
		}
};

class duzbucaqli:public umumi{
	public:
		int en,uz;
		duzbucaqli(){
			nov="Duzbucaqli";
		}
		void terefgir(){
			cout<<"Duzbucaqlinin enini gir:";      cin>>en;
			cout<<"Duzbucaqlinin uzunlugunu gir:"; cin>>uz;
		}
		void sahehesab(){
			sahe=en*uz;
		}
};

int main(){
	kvadrat kv1;
	duzbucaqli d1;
	kv1.terefgir();
	kv1.sa_va_gir();
	d1.terefgir();
	d1.sa_va_gir();
	kv1.sahehesab();
	kv1.sahe_goster();
	d1.sahehesab();
	d1.sahe_goster();
	
	return 0;
}
