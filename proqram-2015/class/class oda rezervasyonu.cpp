#include<iostream>
#include<cstring>
using namespace std;

class otel{
	string *musteriadi[100],*soyadi[100];
	int toplam,sayac1,sayac2;
	enum status{
		bos,dolu
		}odalar[45];
	public:
		otel();
		void oda_isletme();
		void oda_sifaris();
		void oda_bosaltma();
		void musteri_say();
		void yatodasi_raporu();
		void qonotagi_raporu();
		void gelir();
};

otel::otel(){
	toplam=0;  sayac2=0;  sayac1=0;
	oda_isletme();
}

void otel::oda_isletme(){
	for(int i=1;i<46;i++)
	odalar[i]=bos;
	int sayi;
	do{
		cout<<"\n\t\t---KODLAB OTEL ---\n\n";
		cout<<"\t\t1.Oda sifarisi\n";
		cout<<"\t\t2.Oda bosaltma\n";
		cout<<"\t\t3.Dolu otaq sayi\n";
		cout<<"\t\t4.Yataq otagi melumati\n";
		cout<<"\t\t5.Qonaqotagi melumati\n";
		cout<<"\t\t6.Gelir\n";
		cout<<"\t\t7.Cixis...\n\n";
		cout<<"Seciminizi girin: "; cin>>sayi;
		switch(sayi){
			case 1:oda_sifaris();     break;
			case 2:oda_bosaltma();    break;
			case 3:musteri_say();     break;
			case 4:yatodasi_raporu(); break;
			case 5:qonotagi_raporu(); break;
			case 6:gelir();           break;
			case 7:exit(1);
			default :cout<<"Dogru secim etmediniz.Lutfen yeniden secin:\n";
			}
	}while(sayi!=7);
}

void otel::oda_sifaris(){
	int sayi,x2,i=1,j=6,k=16;
	string ad,soyad;
	cout<<"\n\t\t-Lutfen bir oda novu secin -\n\n";
	cout<<"\t\t1.1 kisilik oda (50 manat) \n";
	cout<<"\t\t2.2 kisilik oda (100 manat) \n";
	cout<<"\t\t3.3 kisilik oda (200 manat) \n";
	cin>>sayi;
	switch(sayi){
		case 1:
			for(; j<16;j++){
			if(odalar[j]==bos){
				odalar[j]=dolu; 
				cout<<"Adiniz: "; cin>>ad;
				cout<<"SoyAdiniz: "; cin>>soyad;
				cout<<"Nece gun qalacaqsiz? "; cin>>x2;
				toplam+=x2*50;
				sayac1++;
				musteriadi[j]=new string;
				*musteriadi[j]=ad;
				soyadi[j]=new string;
				*soyadi[j]=soyad;
				break;
			}
			if(i==16) cout<<"Teessufki butun otaqlar doludur.\n";
		} break;
		case 2:
			for(;k<46;k++){
				if(odalar[k]==bos){
					odalar[k]=dolu;
				cout<<"Adiniz: "; cin>>ad;
				cout<<"SoyAdiniz: "; cin>>soyad;
				cout<<"Nece gun qalacaqsiz? "; cin>>x2;
				toplam+=x2*100;
				sayac1++;
				musteriadi[k]=new string;
				*musteriadi[k]=ad;
				soyadi[k]=new string;
				*soyadi[k]=soyad;
				break;
			}
			if(i==16) cout<<"Teessufki butun otaqlar doludur.\n";
		}break;
		case 3:
			for(;i<6;i++)
			{
				if(odalar[i]==bos){
					odalar[i]=dolu;
				cout<<"Adiniz: "; cin>>ad;
				cout<<"SoyAdiniz: "; cin>>soyad;
				cout<<"Nece gun qalacaqsiz? "; cin>>x2;
				toplam+=x2*200;
				sayac2++;
				musteriadi[i]=new string;
				*musteriadi[i]=ad;
				soyadi[i]=new string;
				*soyadi[i]=soyad;
				break;
				} if(i==6) cout<<"Teessufki butun otaqlar doludur...\n";
			}break;
				default :cout<<"Lutfen dogru secim edin.\n";
		}
	}

void otel::oda_bosaltma(){
	cout<<"Bosaltmak istediyiniz oda numarasi kac: ";
	int sayi;
	cin>>sayi;
	if(odalar[sayi]==dolu){
		if(sayi>=6){
		odalar[sayi]=bos;
		delete musteriadi[sayi];
		delete soyadi[sayi];
		sayac1--;
		cout<<"Oda silindi...\n";
	}
	else {
		odalar[sayi]=bos;
		delete musteriadi[sayi];
		delete soyadi[sayi];
		sayac2--;
		cout<<"Oda silindi...\n";
	}
	}
	else cout<<"Lutfen oda numarasini dogru giriniz:\n";
}

void otel::musteri_say(){
	cout<<"Dolu otaq sayisi: "<<sayac1+sayac2<<" -dir\n";
}

void otel::yatodasi_raporu(){
		cout<<"=========================================\n";
		for(int i=6;i<46;i++)
		if(odalar[i]==dolu)
		cout<<i<<" nomreli otaq\t\t"<<*musteriadi[i]<<"\t\t"<<*soyadi[i]<<"\n";
		else cout<<i<<" nomreli otaq bosdur...\n";
}

void otel::qonotagi_raporu(){
		for(int i=1;i<6;i++)
		if(odalar[i]==dolu)
		cout<<i<<" nomreli otaq\t\t"<<*musteriadi[i]<<"\t\t"<<*soyadi[i]<<"\n";
		else cout<<i<<" nomreli otaq bosdur...\n";
}

void otel::gelir(){
	cout<<"Gelir : "<<toplam<<"\n";
}

int main(){
	otel o1;
	return 0;
}
