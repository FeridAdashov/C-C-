#include<iostream>
using namespace std;
int main(){
float x,y;
char a;
cout<<"\tHESABLAMALAR...\n";
cout<<"+.Toplama\n-.Cixma\n*.Vurma\n/.Bolme\nBirinci sayini girin: ";
cin>>x;
cout<<"Ikinci sayini girin: ";
cin>>y;
cout<<"Hesab emeli yuxardakilara uygun secin: ";
cin>>a;
if(a=='+') cout<<x<<" ve "<<y<<" -in cemi: "   <<x+y;
if(a=='-') cout<<x<<" ve "<<y<<" -in ferqi: "  <<x-y;
if(a=='*') cout<<x<<" ve "<<y<<" -in hasili: " <<x*y;
if(a=='/') cout<<x<<" ve "<<y<<" -in nisbeti: "<<x/y;
	return 0;
}


/*#include<iostream>
using namespace std;
int main(){
float x,y;
int a;
cout<<"\tHESABLAMALAR...\n";
cout<<"1.Toplama\n2.Cixma\n3.Vurma\n4.Bolme\nBirinci sayini girin: ";
cin>>x;
cout<<"Ikinci sayini girin: ";
cin>>y;
cout<<"Hesab emeli yuxardakilara uygun secin: ";
cin>>a;
if(a==1) cout<<x<<" ve "<<y<<" -in cemi: "   <<x+y;
if(a==2) cout<<x<<" ve "<<y<<" -in ferqi: "  <<x-y;
if(a==3) cout<<x<<" ve "<<y<<" -in hasili: " <<x*y;
if(a==4) cout<<x<<" ve "<<y<<" -in nisbeti: "<<x/y;
	return 0;
}*/
