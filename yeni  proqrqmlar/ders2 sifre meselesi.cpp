#include<iostream>
#include<cstring>
using namespace std;
int main(){ int sayac=0;
	char giris_adi[]={"Ferid"},esl_sifre[]={"12345"},ad[20],sifre[20];
	while(1){
		cout<<"Adinizi girin: ";gets(ad);
		cout<<"Sifreni girin: ";gets(sifre);
		if(strcmp(esl_sifre,sifre)==0 && strcmp(giris_adi,ad)==0 ){
		cout<<"Giris tamamlandi...\n";
		break;
		}
		else {
		cout<<"Yanlis sifre,Ad ve sifrenin dogrulugunu yoxlayin\n\n";
		sayac++;
		}
		if(sayac==3){
			cout<<"Sisten blok edildi...\n";
			break;
		}
	}
	return 0;
}
