#include<iostream>
#include<cstring>
#include<conio.h>
#include<fstream>
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
		void a_musteri_axtar();
};

otel::otel(){
	toplam=0;  sayac2=0;  sayac1=0;
	oda_isletme();
}

void otel::oda_isletme(){int i;
	for(i=1;i<46;i++){
	odalar[i]=bos;
	}
	
	int sayi;
	do{system("cls");
		cout<<"\n\t\t---BAKU HOTEL ---\n\n";
		cout<<"\t\t1.Otaq sifarisi\n";
		cout<<"\t\t2.Otaq bosaltma\n";
		cout<<"\t\t3.Dolu otaq sayi\n";
		cout<<"\t\t4.Yataq otagi melumati\n";
		cout<<"\t\t5.Qonaqotagi melumati\n";
		cout<<"\t\t6.Musteri axtar\n";
		cout<<"\t\t7.Gelir\n";
		cout<<"\t\t8.Cixis...\n\n";
		cout<<"Seciminizi girin: "; cin>>sayi;
		switch(sayi){
			case 1:oda_sifaris();     break;
			case 2:oda_bosaltma();    break;
			case 3:musteri_say();     break;
			case 4:yatodasi_raporu(); break;
			case 5:qonotagi_raporu(); break;
			case 6:a_musteri_axtar(); break;
			case 7:gelir();           break;
			case 8:exit(1);
			default :cout<<"Dogru secim etmediniz.Lutfen yeniden secin:\n";
			}
	}while(sayi!=8);
}

void otel::oda_sifaris(){
	system("cls");
	int sayi,x2,i=1,j=6,k=16;
	string ad,soyad;
	cout<<"\n\t\t-Lutfen bir Otaq novu secin -\n\n";
	cout<<"\t\t1.1 kisilik Otaq (50 manat) \n";
	cout<<"\t\t2.2 kisilik Otaq (100 manat) \n";
	cout<<"\t\t3.3 kisilik Otaq (200 manat) \n";
	cin>>sayi;
	switch(sayi){
		case 1:{int p;
		system("cls");
			for(; j<=16;j++){
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
				cout<<"Qeydiyata alindiniz..."<<endl;
				break;
			}
			if(j==16) cout<<"Teessufki butun 1 otaqlilar doludur.\n";
		} cout<<"\nBas MENU ya getmek ucun her hansi bir duymeni sixin...";
			p=getch();}
		 break;
		case 2:{int p;
		system("cls");
			for(;k<=46;k++){
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
				cout<<"Qeydiyata alindiniz..."<<endl;
				break;
			}
			if(k==46) cout<<"Teessufki butun 2 otaqlilar doludur.\n";
		}cout<<"\nBas MENU ya getmek ucun her hansi bir duymeni sixin...";
			p=getch();}
		break;
		case 3:{int p;
		system("cls");
			for(;i<=6;i++)
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
				cout<<"Qeydiyata alindiniz..."<<endl;
				break;
				} if(i==6) cout<<"Teessufki butun qonaq otaqlar doludur...\n";
			}cout<<"\nBas MENU ya getmek ucun her hansi bir duymeni sixin...";
			p=getch();}
			break;
				default :cout<<"Lutfen dogru secim edin.\n";
		}
	}

void otel::oda_bosaltma(){system("cls");
	cout<<"Bosaltmak istediyiniz Otaq nomresi necedir?: ";
	int sayi;
	cin>>sayi;
	if(odalar[sayi]==dolu){
		if(sayi>=6){
		odalar[sayi]=bos;
		delete musteriadi[sayi];
		delete soyadi[sayi];
		sayac1--;
		cout<<"Otaq silindi...\n";
		cout<<"\nBas MENU ya getmek ucun her hansi bir duymeni sixin...";
			sayi=getch();
	}
	else {
		odalar[sayi]=bos;
		delete musteriadi[sayi];
		delete soyadi[sayi];
		sayac2--;
		cout<<"Otaq silindi...\n";
	}
	}
	else cout<<"Lutfen Otaq nomresini dogru girin:\n";
	cout<<"\nBas MENU ya getmek ucun her hansi bir duymeni sixin...";
			sayi=getch();
}

void otel::musteri_say(){int p;
system("cls");
	cout<<"Dolu otaq sayi: "<<sayac1+sayac2<<" -dir\n";
	cout<<"\nBas MENU ya getmek ucun her hansi bir duymeni sixin...";
			p=getch();
}

void otel::yatodasi_raporu(){int p;
system("cls");
		cout<<"=========================================\n";
		for(int i=6;i<46;i++)
		if(odalar[i]==dolu)
		cout<<i<<" nomreli otaq\t\t"<<*musteriadi[i]<<"\t\t"<<*soyadi[i]<<"\n";
		else cout<<i<<" nomreli otaq bosdur...\n";
		cout<<"\nBas MENU ya getmek ucun her hansi bir duymeni sixin...";
			p=getch();
}

void otel::qonotagi_raporu(){int p;
system("cls");
		for(int i=1;i<6;i++)
		if(odalar[i]==dolu)
		cout<<i<<" nomreli otaq\t\t"<<*musteriadi[i]<<"\t\t"<<*soyadi[i]<<"\n";
		else cout<<i<<" nomreli otaq bosdur...\n";
		cout<<"\nBas MENU ya getmek ucun her hansi bir duymeni sixin...";
			p=getch();
}


void otel::gelir(){int p;
system("cls");
	cout<<"Gelir : "<<toplam<<"\n";
	cout<<"\nBas MENU ya getmek ucun her hansi bir duymeni sixin...";
			p=getch();
}

void otel::a_musteri_axtar(){
	system("cls");
	string ad,soyad;
	int i;
	cout<<"Musterinin adini gir: ";
	cin>>ad;
	cout<<"SoyAdi: ";
	cin>>soyad;
	for(i=1;i<46;i++)
	if(odalar[i]==dolu && *musteriadi[i]==ad && soyad==*soyadi[i]){
	cout<<"AD: "<<*musteriadi[i]<<"\nSoyAd: "<<*soyadi[i]<<"\nOtaq: "<<i;
	break;}
	if(i==46) cout<<"Bu adli insan bu otelde yoxdur...";
	cout<<"\n\nBas MENU ya getmek ucun her hansi bir duymeni sixin...";
			i=getch();
}

int main(){
	otel o1;
	return 0;
}
