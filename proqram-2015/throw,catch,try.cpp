#include<iostream>
using namespace std;
int main(){
	int bolen,bolunen;
	double result;
	cout<<"Iki ededin bolunmesi...\n\n";
	while(true){
		cout<<"\n\nBoluneni daxil edin: ";
		cin>>bolunen;
		cout<<"Boleni daxil edin: ";
		cin>>bolen;
		try{
		if(bolen==0) throw 1;
		else cout<<"Cavab: "<<(double)bolunen/bolen;
		}
		catch(int){
			cout<<"0-a bolme xetasi!!!\n";
		}
	}
	return 0;
}
