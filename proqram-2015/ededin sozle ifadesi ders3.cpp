#include<iostream>
using namespace std;
int main(){int a,b,c;
cin>>a;
if(a>=1 && a<1000){
		switch(a/100){
		case 1:cout<<"Yuz ";       break;
		case 2:cout<<"Ikiyuz ";    break;
		case 3:cout<<"Ucyuz ";     break;
		case 4:cout<<"Dordyuz ";   break;
		case 5:cout<<"Besyuz ";    break;
		case 6:cout<<"Altiyuz ";   break;
		case 7:cout<<"Yeddiyuz ";  break;
		case 8:cout<<"Sekkizyuz "; break;
		case 9:cout<<"Doqquzyuz "; break;
	}
	switch(a/10%10){
		case 1:cout<<"On ";     break;
		case 2:cout<<"Iyirmi "; break;
		case 3:cout<<"Otuz ";   break;
		case 4:cout<<"Qirx ";   break;
		case 5:cout<<"Elli ";   break;
		case 6:cout<<"Altmis "; break;
		case 7:cout<<"Yetmis "; break;
		case 8:cout<<"Seksen "; break;
		case 9:cout<<"Doxsan "; break;	
	}
		switch(a%10){
		case 1:cout<<"Bir";    break;
		case 2:cout<<"Iki";    break;
		case 3:cout<<"Uc";     break;
		case 4:cout<<"Dord";   break;
		case 5:cout<<"Bes";    break;
		case 6:cout<<"Alti";   break;
		case 7:cout<<"Yeddi";  break;
		case 8:cout<<"Sekkiz"; break;
		case 9:cout<<"Doqquz"; break;
	}
}
else cout<<"Daxil etdiyiniz sayi heddi asir...";
cout<<"\nSAGOLUN";
	return 0;
}
