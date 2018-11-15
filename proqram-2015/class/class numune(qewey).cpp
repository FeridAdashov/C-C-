#include<iostream>
#include<cstring>
using namespace std;

class aktyor{
	char ad[20],soyad[20],filmadi[20],tarix[20];
	public:
		void bilgi_al();
		void bilgi_ver();
};

void aktyor::bilgi_al(){
	
	cout<<"\nAd: ";     gets(ad);
	cout<<"SoyAd: ";    gets(soyad);
	cout<<"Film Adi: "; gets(filmadi);
	cout<<"Tarix: ";    gets(tarix);
}

void aktyor::bilgi_ver(){
	cout<<"\nAd: "<<ad<<"\nSoyad: "<<soyad<<"\nFilm: "<<filmadi<<"\nTarix: "<<tarix<<"\n";
}

int main(){
	aktyor insan[2];
	for(int i=0;i<2;i++)
	insan[i].bilgi_al();
	for(int i=0;i<2;i++)
	insan[i].bilgi_ver();
	return 0;
}
