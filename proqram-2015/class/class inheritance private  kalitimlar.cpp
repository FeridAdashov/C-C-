#include<iostream>
using namespace std;

class esas{
	int x;
	public:
		int goster(){
			return x=78;
		}
};

class kalitim: private esas{ 
//burda esas sinifin butun elementleri kalitim sinifine private oldu yeni birbasa element veya
//funksiyalara muraciet olmur ona gore adi halda etdiyimiz kimi bunu funksiyalar komeyi ile edirik
	int y;
	public:
		int goster1(){
			return y=56;
		}
		int esasgoster(){
			return goster();
		}
};

int main(){
	kalitim a;
	cout<<a.esasgoster();
	return 0;
}
