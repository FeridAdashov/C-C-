#include<iostream>
using namespace std;

class setr{
	string x;
	public:
	setr(string a){
		x=a;
	}
	
	void operator+(setr a){
		x=x+a.x;
	}
	string al(){
		return x;
	}
};
int main(){
	setr a("Ferid"),b(" Adasov");
	cout<<a.al()<<endl;
	cout<<b.al()<<endl;
	a+b;
	cout<<a.al()<<endl;
	cout<<b.al();
	return 0;
}
