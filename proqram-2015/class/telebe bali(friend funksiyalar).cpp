#include<iostream>
using namespace std;

class sinif{
	int qiymet;
	public:
	friend	void al(sinif *a){
	cout<<"\nOyrencinin qiymetini gir: "; cin>>a->qiymet;
}
		friend void goster(sinif a){
	cout<<"\nQiymet="<<a.qiymet;
}
};
//ONA GORE UNVANA GORE OTURULURKI QIYMET YAZANDA BIRBASA UNVANA YAZILSIN YENI KOPYA
//UZERINDE EMELIYYAT APARILANDA SONRADAN QIYMET CAP ETSEK DAXIL ETDIYIMIZ QIYMETLER OLMAYACAQ
int main(){
sinif telebe1,telebe2,telebe3;
al(&telebe1);
al(&telebe2);
al(&telebe3);
goster(telebe1);
goster(telebe2);
goster(telebe3);
return 0;
}
