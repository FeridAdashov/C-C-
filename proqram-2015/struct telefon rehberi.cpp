#include<iostream>
#include<iomanip>
using namespace std;
struct melumat{
	char ad[20];
	char weher[20];
	char tel_nomre[20];
};
int main(){int i,say;
cout<<"\t\tTELEFON REHBERI\nwexs sayini gir: "; cin>>say;
melumat n[say];
for(i=0;i<say;i++){
cout<<i+1<<" -ci sexs: ";  cin>>n[i].ad;
cout<<n[i].ad<<" -in yasadigi weher: "; cin>>n[i].weher;
cout<<n[i].ad<<" -in nomres: "; cin>>n[i].tel_nomre;
}
cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\tTELEFON REHBERI\n\n";
cout<<setw(20)<<"WEXSLER"<<setw(20)<<"WEHER"<<setw(20)<<"NOMRE\n\n";
for(i=0;i<say;i++)
cout<<i+1<<'.'<<setw(20)<<n[i].ad<<setw(20)<<n[i].weher<<setw(20)<<n[i].tel_nomre<<"\n"; 
	return 0;
}
