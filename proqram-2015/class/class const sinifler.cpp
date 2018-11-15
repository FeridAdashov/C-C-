#include<iostream>
using namespace std;

class ConstOrnek{
	public:
	int sayi;
	ConstOrnek(){
		sayi=7;
	}
	void sayi_goder(int x){
		sayi=x;
	}
	int qaytar() const {
		return sayi;
	}
};

int main(){
	const ConstOrnek test; //test-const dir-sayi_gonder funksiyasi ile qiymet gondermek olmur,sayi_gonder const deyil
	ConstOrnek test2;
	cout<<"Test-in qiymeti: "<<test.qaytar();//'test'in qiymetini deyiwmek olmur
	test2.sayi_goder(5);//test2-in qiymetini deyismek olur
	cout<<"\nTest2-in qiymeti: "<<test2.qaytar();

	return 0;
}
