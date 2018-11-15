#include<iostream>
using namespace std;

class kamaz;

class masin{
	int suret,insan_sayi;
	public:
		masin(int a,int b){
			suret =a;
			insan_sayi=b;
		}
		int dost(kamaz a);
};

class kamaz{
	int yuk,suret;
	public:
		kamaz(int a,int b){
			suret=a;
			yuk=b;
		}
		friend int masin::dost(kamaz t);
};

int masin::dost(kamaz t){
	return suret-t.suret;	
}

int main(){int m;
	masin a1(100,12);
	masin b2(120,45);
	kamaz c3(100,1200);
	kamaz d4(180,1000);
	m=a1.dost(c3);
	cout<<"1-ci masin 3-ci kamaz:\n\n";
	if(m>0)       cout<<"Masinin sureti coxdur...\n";
	else if(m==0) cout<<"Suretler beraberdir...\n";
	else          cout<<"Kamazin sureti coxdur...\n";
	
	cout<<"\n2-ci masin 4-ci kamaz:\n\n";
	m=b2.dost(d4);
	if(m>0)       cout<<"Masinin sureti coxdur...\n";
	else if(m==0) cout<<"Suretler beraberdir...\n";
	else          cout<<"Kamazin sureti coxdur...\n";	
	return 0;
}
