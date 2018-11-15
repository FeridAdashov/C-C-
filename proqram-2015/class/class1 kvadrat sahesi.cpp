#include<iostream>
using namespace std;

class kvadrat{
		int en,uz;
	public:
		int qiymet_yaz(int a,int b){
			en=a;
			uz=b;
		}
		int sahe(){
			return en*uz;
		}
		int per(){
			return 2*(en+uz);
		}
};

int  main(){int En,Uz;
	kvadrat kvadrat1;
	cout<<"kvadratin enini daxil et: ";
	cin>>En; 
	cout<<"kvadratin uzunlugunu daxil et: ";
	cin>>Uz;     kvadrat1.qiymet_yaz(En,Uz);
	cout<<"kvadratin sahesi: "<<kvadrat1.sahe();
	cout<<"\nkvadratin perimetri: "<<kvadrat1.per();
	return 0;
}
