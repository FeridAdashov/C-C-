#include<iostream>
using namespace std;

class esas{
	public:
		esas(){
			cout<<"Esas sinifin yapici fonksiyonu...\n";
		}
		~esas(){
			cout<<"Esas sinifin yikici fonksiyonu...\n";
		}
};

class toreme: public esas{
	public:
		toreme()
		{
			cout<<"Toreme sinifin yapici fonksiyonu...\n";
		}
		~toreme()
		{
			cout<<"Toreme sinifin yikici fonksiyonu...\n";
		}
};

int main(){
	toreme a;	
	return 0;
}
